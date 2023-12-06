
#include <iostream>

double getProbability(int n, int m) {
    if (n == m) {
        return 0.5;
    }
    double probability = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    return probability;
}