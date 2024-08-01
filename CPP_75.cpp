#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int j = sqrt(i);
        while (j >= 1) {
            if (i * j == a) {
                return true;
            }
            --j;
        }
    }
    return false;
}