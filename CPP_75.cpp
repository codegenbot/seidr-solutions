#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int remainder = a % i;
        if (remainder == 0) {
            int j = i;
            int k = a / i;
            while (k > 1) {
                if (j != 2 && isPrime(j)) {
                    if (k != j) {
                        j = k;
                        k = a / j;
                    }
                } else {
                    break;
                }
            }
            if (k == 1) return true;
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}