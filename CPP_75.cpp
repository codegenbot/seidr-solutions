#include <cmath>

bool is_multiply_prime(int a) {
    if (a < 30) return false;
    for (int i = 2; i <= sqrt(a); ++i) {
        for (int j = i; j <= a / i; ++j) {
            int k = a / (i * j);
            if (i * j * k == a && i != j && j != k && i != k) {
                return true;
            }
        }
    }
    return false;
}