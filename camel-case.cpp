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
        } else if (capitalize || (&c - &input[0]) == 0) {
            std::cout << (char)toupper(c);
            capitalize = false;
        } else if (c != '-' && c != ' ' && !capitalize) {
            std::cout << (char)tolower(c);
        }
    }

    return 0;
}