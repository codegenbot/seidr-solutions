#include <iostream>
#include <string>

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);
    std::cout << "Number is " << (is_prime(std::stoi(input)) ? "prime" : "not prime");
    return 0;