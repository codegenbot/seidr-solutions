#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = split(s, " ");
    std::string result;

    for (const auto& word : words) {
        if (!result.empty()) {
            result += tolower(word[0]);
            result += word.substr(1);
        } else {
            result += toupper(word[0]) + word.substr(1);
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& s, char delimeter) {
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = 0;

    while ((end = s.find(delimeter, start)) != std::string::npos) {
        tokens.push_back(s.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(s.substr(start));

    return tokens;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase equivalent: " << kebabToCamel(input) << std::endl;

    return 0;
}