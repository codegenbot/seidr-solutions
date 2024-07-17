#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    size_t prevSpace = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            if (prevSpace > 0) {
                result.push_back(std::toupper(s[prevSpace]));
            }
            prevSpace = i + 1;
        } else if (s[i] == ' ') {
            prevSpace = i;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "In camelCase: " << kebabToCamel(input) << std::endl;

    return 0;
}