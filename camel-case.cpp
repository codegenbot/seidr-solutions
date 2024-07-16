#include <iostream>
#include <string>

std::string split(const std::string& str, char delimiter) {
    std::string result;
    for (char c : str) {
        if (c == delimiter) {
            result += ' ';
        } else {
            result += c;
        }
    }
    return result;
}

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : split(str, '-')) {
        if (!result.empty()) {
            result += toupper(word[0]);
            for (char c : word.substr(1)) {
                result += tolower(c);
            }
        } else {
            result = tolower(word);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Please enter a non-empty string." << std::endl;
    } else {
        std::cout << "camelCase: " << camelCase(input) << "\n";
    }
    return 0;
}