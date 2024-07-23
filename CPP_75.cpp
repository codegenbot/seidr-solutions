```
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int j = 2;
        while (j * i <= a) {
            if (isPrime(j * i)) {
                int k = a / (j * i);
                if (isPrime(k) && isPrime(i)) {
                    return true;
                }
            }
            j++;
        }
    }
    return false;
}