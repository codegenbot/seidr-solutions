#include <iostream>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    std::cout << std::boolalpha;
    std::cout << is_prime(7) << std::endl; // true
    std::cout << is_prime(10) << std::endl; // false

    return 0;
}