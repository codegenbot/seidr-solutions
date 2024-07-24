#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            int b = a / i;
            int c = a % i;
            for (int k = 2; k <= sqrt(b); k++) {
                if (b % k == 0) {
                    count++;
                    break;
                }
            }
            if (c > 1) {
                for (int k = 2; k <= sqrt(c); k++) {
                    if (c % k == 0) {
                        count++;
                        break;
                    }
                }
            }
        }
        if (count == 3)
            return true;
    }
    return false;
}