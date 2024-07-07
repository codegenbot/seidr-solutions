#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int product = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0 && isPrime(j)) {
                product *= j;
                break;
            }
        }
        if (product * i == a) {
            return true;
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}