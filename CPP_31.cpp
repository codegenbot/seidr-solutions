#include <iostream>
#include <cmath>

bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}