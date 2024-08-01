#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            for (int k = i; k <= a / i; k++) {
                int count1 = 0;
                for (int l = 2; l <= k / 2; l++) {
                    if (k % l == 0)
                        count1++;
                }
                if (count1 == 0) {
                    int count2 = 0;
                    for (int m = 2; m <= a / (i * k); m++) {
                        if (a / (i * k) % m == 0)
                            count2++;
                    }
                    if (count2 == 0)
                        return true;
                }
            }
        }
    }
    return false;
}