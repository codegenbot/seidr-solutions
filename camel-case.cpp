#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = true;
    bool firstWord = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize || firstWord) {
            std::cout << (char)toupper(c);
            capitalize = false;
            firstWord = false;
        } else {
            std::cout << c;
        }
    }

    return 0;
}