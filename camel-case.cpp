#include <iostream>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else {
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return 0;
}