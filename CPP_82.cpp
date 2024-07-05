#include <iostream>
#include <string>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    return is_prime(str.length());
}

int main() {
    std::string input;
    std::cin >> input;
    if (prime_length(input)) {
        std::cout << "The length of the input string is a prime number.\n";
    } else {
        std::cout << "The length of the input string is not a prime number.\n";
    }
    return 0;
}