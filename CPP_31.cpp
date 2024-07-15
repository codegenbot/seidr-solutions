#include <cassert>
#include <iostream>

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

void main() {
    long long n;
    std::cin >> n;

    if (is_prime(n)) {
        std::cout << "Prime\n";
    } else {
        std::cout << "Not Prime\n";
    }
}