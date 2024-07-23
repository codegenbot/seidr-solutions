#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            int j = 2;
            while (j * j <= a) {
                if (a % j == 0 && is_prime(j)) {
                    int k = a / j;
                    bool flag = true;
                    for (; k > 1; --k) {
                        if (!is_prime(k)) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag)
                        return true;
                }
                ++j;
            }
        }
    }
    return false;
}

bool is_prime(int a) {
    if (a <= 1)
        return false;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0)
            return false;
    }
    return true;
}