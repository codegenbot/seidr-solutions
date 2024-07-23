#include <iostream>
#include <string>

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(const std::string& str) {
    int length = str.length();
    return isPrime(length);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 
    bool result = prime_length(str); 
    if (result) {
        std::cout << "Prime length" << '\n';
    } else {
        std::cout << "Not prime length" << '\n';
    }
    return 0;
}