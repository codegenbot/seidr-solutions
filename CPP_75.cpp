#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a;
        while (temp % i == 0) {
            if (isPrime(i)) {
                temp /= i;
                int j = 2;
                while (j <= sqrt(temp) && temp % j != 0) {
                    j++;
                }
                if (j > sqrt(temp)) {
                    return true;
                } else {
                    break;
                }
            } else {
                break;
            }
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}