#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> input;
        std::cout << "Output: " << kebabToCamel(input) << std::endl;
    }
    return 0;
}