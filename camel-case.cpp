#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)toupper(c);
            capitalize = false;
        } else if (std::isspace(c)) {
            std::cout << ' ';
        } else {
            std::cout << c;
        }
    }
    
    return 0;
}