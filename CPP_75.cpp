#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int j = a / i;
        int k = a / j;
        if (i * j * k == a && isPrime(i) && isPrime(j) && isPrime(k)) {
            return true;
        }
    }
    return false;
}

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