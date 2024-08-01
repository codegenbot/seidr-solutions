#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << c;
            capitalize = false;
        } else {
            std::cout << (capitalize ? (char)toupper(c) : (char)tolower(c));
        }
    }

    return 0;
}