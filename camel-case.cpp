#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(std::string kebabCase) {
    std::string camelCase;
    bool capitalizeNext = false;

    for (int i = 0; i < kebabCase.length(); i++) {
        if (kebabCase[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += std::toupper(kebabCase[i]);
            capitalizeNext = false;
        } else {
            camelCase += kebabCase[i];
        }
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string camelCase = kebabToCamel(input);
    std::cout << camelCase << std::endl;

    return 0;
}