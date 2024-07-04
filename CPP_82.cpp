#include <string>
#include <cassert>
#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    int len = str.length();
    return is_prime(len);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (prime_length(input)) {
        std::cout << "The length of the string is a prime number.\n";
    } else {
        std::cout << "The length of the string is not a prime number.\n";
    }
    return 0;
}