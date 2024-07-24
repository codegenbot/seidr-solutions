#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (const auto& word : s.split(" ")) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
        } else {
            result += tolower(word);
        }
        for (size_t i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}