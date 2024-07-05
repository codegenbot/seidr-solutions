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
    std::cout << std::boolalpha; // Optional: to print bool as true/false
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    std::cout << prime_length(input) << std::endl; // prints true or false based on the length of input
    return 0;
}