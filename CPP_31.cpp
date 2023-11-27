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

int main() {
    long long num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << (is_prime(num) ? "true" : "false") << std::endl;
    return 0;
}