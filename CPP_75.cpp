#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 30) return false;
    for (int i = 2; i <= a / 2; ++i) {
        if (a % i == 0 && is_prime(i)) {
            int b = a / i;
            for (int j = i + 1; j <= b / 2; ++j) {
                if (b % j == 0 && is_prime(j) && is_prime(b / j)) {
                    return true;
                }
            }
        }
    }
    return false;
}