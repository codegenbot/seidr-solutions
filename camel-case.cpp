#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case (type 'q' to quit): ";
        std::getline(std::cin, input);
        if(input == "q") break;
        std::cout << "Output: " << kebabToCamelCase(input) << '\n';
    }
    return 0;
}