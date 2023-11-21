#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    bool capitalizeNext = false;

    for (char c : kebabCase) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCase += c;
        }
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}