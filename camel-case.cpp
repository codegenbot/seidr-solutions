#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamelCase(const std::string& kebabCase) {
    std::string camelCase;
    std::vector<std::string> words;

    // Split the kebabCase string into words
    size_t start = 0;
    size_t end = kebabCase.find('-');
    while (end != std::string::npos) {
        words.push_back(kebabCase.substr(start, end - start));
        start = end + 1;
        end = kebabCase.find('-', start);
    }
    words.push_back(kebabCase.substr(start));

    // Convert each word to camelCase
    for (size_t i = 0; i < words.size(); i++) {
        std::string word = words[i];
        if (i > 0) {
            // Capitalize the first character of each word except the first word
            word[0] = std::toupper(word[0]);
        }
        camelCase += word;
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = kebabToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}