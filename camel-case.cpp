#include <string>
#include <iostream>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                capitalizeNext = true;
            }
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ')
            result[i] = '\0';
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase: " << kebabToCamel(input) << std::endl;
    return 0;
}