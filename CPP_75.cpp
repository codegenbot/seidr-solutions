#include <cassert>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int n) {
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
        return false;
    }
    
    int prime_count = 0;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0 && is_prime(i)) {
            prime_count++;
            if (prime_count > 3) {
                return false;
            }
        }
    }
    
    return prime_count == 3;
}