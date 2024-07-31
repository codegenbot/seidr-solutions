#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= a / 3; i++) {
        if (is_prime(i) && a % i == 0) {
            int remaining = a / i;
            for (int j = i + 1; j <= remaining / 2; j++) {
                if (is_prime(j) && remaining % j == 0 && is_prime(remaining / j)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number less than 100: ";
    std::cin >> num;
    std::cout << (is_multiply_prime(num) ? "true" : "false") << std::endl;
    return 0;
}