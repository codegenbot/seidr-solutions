```
#include <cmath>
#include <iostream>
#include <cassert>

double sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

assert(sum_squares(17) == -1448);