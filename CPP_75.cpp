#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && a % i == 0) {
            int b = a / i;
            int c = b / i;
            return isPrime(c);
        }
    }
    return false;
}

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}