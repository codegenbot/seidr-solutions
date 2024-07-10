#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            for (int k = i * i; k <= a; k += i) {
                int b = a / k;
                int c = k - (a - k);
                if (k * b * c == a && is_prime(k) && is_prime(b) && is_prime(c))
                    return true;
            }
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}