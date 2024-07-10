#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    size_t start = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || (s[i] == '-' && (i == start || s[i-1] != '-'))) {
            if (start < i) {
                result += s.substr(start, i - start).substr(1);
            }
            start = i + 1;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase equivalent is: " << toCamelCase(input) << std::endl;

    return 0;
}