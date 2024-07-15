#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    size_t start = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-' || s[i] == ' ') {
            if (start < i) {
                char c = s[start];
                while (++start < i && s[start] == '-') {}
                result += std::toupper(c);
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

    std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;

    return 0;
}