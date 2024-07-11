#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    bool firstWord = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)toupper(c);
            capitalize = false;
        } else if (c != ' ') {
            if (firstWord) {
                std::cout << c;
                firstWord = false;
            } else {
                std::cout << (char)tolower(c);
            }
        }
    }

    return 0;
}