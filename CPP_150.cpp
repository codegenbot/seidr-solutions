#include <cmath>

int x_or_y(int n, int x, int y) {
    if (n <= 1) return y;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return y;
    }
    return x;
}