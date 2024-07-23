#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        int remainder = a % i;
        if (remainder == 0) {
            int temp = i;
            while (temp % i == 0) {
                temp /= i;
            }
            if (temp > 1 && is_prime(temp)) {
                for (int j = 2; j <= sqrt(temp); ++j) {
                    remainder = temp % j;
                    if (remainder == 0) {
                        int temp2 = j;
                        while (temp2 % j == 0) {
                            temp2 /= j;
                        }
                        if (temp2 > 1 && is_prime(temp2)) {
                            for (int k = 2; k <= sqrt(temp2); ++k) {
                                remainder = temp2 % k;
                                if (remainder == 0) {
                                    int temp3 = k;
                                    while (temp3 % k == 0) {
                                        temp3 /= k;
                                    }
                                    if (temp3 > 1 && is_prime(temp3)) {
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

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}