#include <iostream>
#include <cassert>

bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_prime(13441 * 19) == false);
    
    return 0;
}