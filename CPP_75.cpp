#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; ++i) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                count++;
                while (i % j == 0) {
                    i /= j;
                }
            }
        }
        if (count == 0 && a % i == 0) {
            int b = a / i;
            int c = i;
            bool flag1 = false, flag2 = false;
            for (int k = 2; k <= sqrt(b); ++k) {
                if (b % k == 0) {
                    count = 0;
                    while (b % k == 0) {
                        b /= k;
                    }
                    if (count == 0) flag1 = true;
                }
            }
            for (int k = 2; k <= sqrt(c); ++k) {
                if (c % k == 0) {
                    count = 0;
                    while (c % k == 0) {
                        c /= k;
                    }
                    if (count == 0) flag2 = true;
                }
            }
            return flag1 && flag2;
        }
    }
    return false;
}