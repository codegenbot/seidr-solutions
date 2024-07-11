#include <cassert>

bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) {
            int j = a / i;
            if (is_prime(j)) return true;
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}