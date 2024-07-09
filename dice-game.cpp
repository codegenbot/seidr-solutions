```c
#include <stdio.h>

int main() {
    int n = 6; 
    int m = 4;
    double result = probability(n, m);
    printf("Probability: %f\n", result);
    return 0;
}

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}