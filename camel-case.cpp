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
        } else {
            std::cout << c;
        }
    }

    capitalize = false;
    
    return 0;
}