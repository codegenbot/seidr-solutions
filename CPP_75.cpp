#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            int j = 2;
            while (j * j <= i) {
                if (i % j == 0)
                    return false;
                j++;
            }
            int k = 2;
            while (k * k <= a / i) {
                if ((a / i) % k == 0)
                    return false;
                k++;
            }
            for (int l = 2; l * l <= a / i / i; l++) {
                if ((a / i / i) % l == 0)
                    return false;
                }
            return true;
        }
    }
    return false;
}