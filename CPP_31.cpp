#include <iostream>

bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (long long i = 2; i <= n/i; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    std::cin >> num;
    if (is_prime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }
    return 0;
}