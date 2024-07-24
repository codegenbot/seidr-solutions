#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (const auto& word : s.split(" ")) {
        if (!result.empty()) {
            result[0] = std::toupper(word[0]);
        } else {
            result += std::toupper(word[0]);
        }
        result += std::string(1, tolower(word[1]));
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