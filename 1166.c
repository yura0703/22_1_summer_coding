#include <stdio.h>
#include <math.h>

int main() {
	double L, W, H;
	int box;
	scanf_s("%d %lf %lf %lf" ,&box,&L, &W, &H);
	int count = 0;
	/*.
	for (int i = 2; i <= (int)box; i++) {
		if (box % i == 0) {
			count++;
		}
	}
	int* arr = (int*)malloc(sizeof(int)*count);
	count = 0;
	for (int i = 1; i <= (int)box; i++) {
		if (box % i == 0) {
			arr[count] = box / i;
			count++;
		}
	}*/
	double m = L < W ? L : W;
	double M = L > W ? L : W;
	m = H < m ? H : m;
	M = H > M ? H : M;
	double a = M;
	double volum= L*W*H;
	if (volum / box >= m * m * m&& floor((L / m)) * floor((W / m)) * floor((H / m)) >= box) {
			printf("%lf", m);
		
	}
	else {
		count = 1;
		while (floor((L/a))*floor((W/a))*floor((H/a)) < box) {
			count++;
			a = M / count;
		}
		/*while (volum < a * a * a * box || (L / a) * (W / a) * (H / a) < box) {
			a = M / count;
			count++;
		}
		*/
		
		//printf("%d\n", count);
		printf("%lf", a);
	}
	//printf("M: %lF, m: %lf", M, m);
	//printf("\n%d %d %d %d", (int)box, (int)L, (int)W, (int)H);
	
}
