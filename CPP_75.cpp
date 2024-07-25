#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= a / 3; ++i) {
        if (a % i == 0 && is_prime(i)) {
            int remaining = a / i;
            for (int j = i + 1; j <= remaining / 2; ++j) {
                if (remaining % j == 0 && is_prime(j) && is_prime(remaining / j)) {
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
    
    if (is_multiply_prime(num)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    
    return 0;
}