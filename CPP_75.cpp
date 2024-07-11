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
    if (a < 2) {
        return false;
    }
    int count = 0;
    for (int i = 2; i < a; i++) {
        if (a % i == 0 && is_prime(i)) {
            count++;
        }
    }
    return count == 3;
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