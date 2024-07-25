#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++) {
                int remainder1 = i % j;
                if (remainder1 == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                int count = 0;
                for (int k = 2; k * k <= i; k++) {
                    int remainder2 = i % k;
                    if (remainder2 == 0) {
                        count++;
                        while (i % k == 0) {
                            i /= k;
                        }
                    }
                }
                if (count == 2 && i > 1) {
                    bool isPrime2 = true;
                    for (int j = 2; j <= sqrt(i); j++) {
                        int remainder3 = i % j;
                        if (remainder3 == 0) {
                            isPrime2 = false;
                            break;
                        }
                    }
                    if (isPrime2) {
                        int count2 = 0;
                        for (int k = 2; k * k <= i; k++) {
                            int remainder4 = i % k;
                            if (remainder4 == 0) {
                                count2++;
                                while (i % k == 0) {
                                    i /= k;
                                }
                            }
                        }
                        if (count2 == 1 && i > 1) {
                            bool isPrime3 = true;
                            for (int j = 2; j <= sqrt(i); j++) {
                                int remainder5 = i % j;
                                if (remainder5 == 0) {
                                    isPrime3 = false;
                                    break;
                                }
                            }
                            if (isPrime3) {
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}