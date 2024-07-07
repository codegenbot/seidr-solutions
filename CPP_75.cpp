#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        for (int j = 2; j <= sqrt(temp); j++) {
            while (temp % j == 0) {
                temp /= j;
            }
            if (temp == 1) {
                return true;
            }
        }
    }
    return false;
}