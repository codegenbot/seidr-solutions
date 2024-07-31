#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 0) {
            for (int k = i * i; k <= a; k += i) {
                int count1 = 0;
                for (int l = 2; l <= k / 2; l++) {
                    if (k % l == 0) {
                        count1++;
                    }
                }
                if (count1 == 0) {
                    for (int m = k * k; m <= a; m += k) {
                        int count2 = 0;
                        for (int n = 2; n <= m / 2; n++) {
                            if (m % n == 0) {
                                count2++;
                            }
                        }
                        if (count2 == 0) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}