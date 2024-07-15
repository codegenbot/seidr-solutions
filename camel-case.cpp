#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    int start = 0;

    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (start < i) {
                result += toupper(str.substr(start, i - start));
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
    std::cout << "The camelCase string is: " << kebabToCamel(input) << std::endl;
    return 0;
}