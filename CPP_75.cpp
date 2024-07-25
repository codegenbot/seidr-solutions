#include <iostream>

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 2) return false;
    for (int i = 2; i <= a / 3; i++) {
        if (is_prime(i) && a % i == 0) {
            for (int j = i + 1; j <= a / 2; j++) {
                if (is_prime(j) && a % j == 0) {
                    int k = a / (i * j);
                    if (is_prime(k) && i * j * k == a) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    bool result = is_multiply_prime(num);
    if (result) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    return 0;
}