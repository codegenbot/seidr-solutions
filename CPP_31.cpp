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

int main() {
    std::cout << is_prime(6) << std::endl;
    std::cout << is_prime(101) << std::endl;
    std::cout << is_prime(11) << std::endl;
    std::cout << is_prime(13441) << std::endl;
    std::cout << is_prime(61) << std::endl;
    std::cout << is_prime(4) << std::endl;
    std::cout << is_prime(1) << std::endl;

    return 0;
}