```
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin.ignore();
    std::getline(std::cin, str);
    bool isPrime = prime_length(str);
}