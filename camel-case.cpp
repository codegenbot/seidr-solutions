#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    if (s.empty()) {
        result += s[0];
    } else {
        if (s[0] == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(s[0]);
            capitalize = false;
        } else {
            result += tolower(s[0]);
        }
    }

    for (char c : s.substr(1)) {
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
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase: " << kebabToCamelCase(input) << std::endl;

    return 0;
}