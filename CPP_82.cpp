#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    int length = str.length();
    if (length <= 1)
        return false;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0)
            return false;
    }
    return true;
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