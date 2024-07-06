#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) {
            int j = 1;
            while (i*j <= a) {
                k = 1;
                while (i*j*k <= a) {
                    if (i*j*k == a) {
                        return false;
                    }
                    k++;
                }
                j++;
            }
            return false;
        }
    }
    return true;
}