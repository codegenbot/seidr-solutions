#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int p = 1;
        while (a % i == 0) {
            a /= i;
            p *= i;
        }
        if (p > 1 && p < 100) {
            return true;
        }
    }
    return false;
}