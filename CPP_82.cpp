#include <string>
#include <iostream>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(std::string str) {
    int length = str.length();
    return is_prime(length);
}

int main() {
    std::string input;
    std::cin >> input;
    if (prime_length(input)) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}