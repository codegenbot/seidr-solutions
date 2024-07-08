#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        int temp = a;
        while (temp % i == 0) {
            if (!isPrime(i)) return false;
            temp /= i;
        }
        if (temp > 1) return false;
    }
    return true;
}