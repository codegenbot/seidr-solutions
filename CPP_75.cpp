#include <iostream>
#include <cassert>

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

bool is_multiply_prime(int num) {
    for (int i = 2; i <= num; i++) {
        if (is_prime(i) && num % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;
    return 0;
}