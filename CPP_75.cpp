#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0 && is_prime(i) && is_prime(a / i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;
    return 0;
}