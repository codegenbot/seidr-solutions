#include <string>
#include <iostream>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) {
        return str;
    }

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(toupper(result[0]));
                    result.erase(0, 1);
                }
                capitalizeNext = true;
                result.push_back(' ');
            } else {
                continue;
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
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
    std::cout << "CamelCase: " << kebabToCamel(input) << std::endl;
    return 0;
}