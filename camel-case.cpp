#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    for (char c : input) {
        if (c == ' ' || c == '-') {
            capitalize = true;
        } else {
            std::cout << (capitalize ? (char)toupper(c) : (char)tolower(c));
            capitalize = false;
        }
    }

    return 0;
}