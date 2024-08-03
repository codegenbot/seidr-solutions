#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    for (const auto& word : str.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << kebabToCamel(input) << std::endl;
    return 0;
}