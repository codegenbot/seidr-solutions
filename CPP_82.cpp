#include <iostream>
#include <string>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(const std::string &str) {
    return is_prime(str.length());
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << std::boolalpha << prime_length(input) << std::endl;
    return 0;
}