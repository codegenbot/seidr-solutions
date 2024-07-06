#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count > 1) {
                for (int k = i + 1; k <= sqrt(a); k++) {
                    remainder = a % k;
                    if (remainder == 0) {
                        int count2 = 0;
                        for (int j = 1; j <= k; j++) {
                            if (k % j == 0) {
                                count2++;
                            }
                        }
                        if (count2 > 1) {
                            for (int l = k + 1; l <= sqrt(a); l++) {
                                remainder = a % l;
                                if (remainder == 0) {
                                    int count3 = 0;
                                    for (int j = 1; j <= l; j++) {
                                        if (l % j == 0) {
                                            count3++;
                                        }
                                    }
                                    if (count3 > 1) {
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}