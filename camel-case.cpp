#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result.push_back(' '); // add a space
            }
            capitalizeNext = true;
        } else if (capitalizeNext || c == ' ') {
            if (result.empty() && capitalizeNext) {
                result += toupper(c);
            } else if (c != ' ') {
                if (!capitalizeNext)
                    result += tolower(c);
                else
                    result += toupper(c);
            }
            capitalizeNext = c != ' ';
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "CamelCase representation: " << kebabToCamel(input) << std::endl;

    return 0;
}