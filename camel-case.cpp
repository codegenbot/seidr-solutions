#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (capitalize && std::isalpha(c)) {
            std::cout << (char)std::tolower(c);
            capitalize = false;
        } else if (c == '-' && !capitalize) {
            capitalize = true;
        } else {
            std::cout << (char)std::toupper(c);
        }
    }
    
    return 0;
}