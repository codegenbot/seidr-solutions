#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        while (temp % i == 0) {
            temp /= i;
            if (isPrime(i)) {
                for (int j = 2; j <= sqrt(temp); j++) {
                    if (temp % j == 0) {
                        bool flag = false;
                        for (int k = 2; k <= sqrt(temp); k++) {
                            if (temp % k == 0) {
                                flag = true;
                                break;
                            }
                        }
                        if (!flag) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}