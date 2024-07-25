#include <iostream>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_multiply_prime(int a) {
    for (int i = 2; i <= a / 3; i++) {
        if (is_prime(i) && a % i == 0) {
            for (int j = i + 1; j <= a / i; j++) {
                if (is_prime(j) && a % (i * j) == 0) {
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
    std::cout << "Enter a number less than 100: ";
    std::cin >> num;

    if (is_multiply_prime(num)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}