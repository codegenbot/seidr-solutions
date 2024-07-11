#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    bool firstChar = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (firstChar || capitalize) {
            std::cout << (char)toupper(c);
            firstChar = false;
            capitalize = false;
        } else if (c != ' ') {
            std::cout << c;
        }
    }

    return 0;
}