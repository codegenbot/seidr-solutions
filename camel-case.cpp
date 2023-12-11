#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    std::vector<std::string> words;

    // Split the kebab case string into individual words
    size_t start = 0;
    size_t end = kebabCase.find("-");
    while (end != std::string::npos) {
        words.push_back(kebabCase.substr(start, end - start));
        start = end + 1;
        end = kebabCase.find("-", start);
    }
    words.push_back(kebabCase.substr(start, end));

    // Convert each word to camel case and append to the result string
    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) {
            // Capitalize the first character of each word except the first word
            words[i][0] = std::toupper(words[i][0]);
        }
        camelCase += words[i];
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = kebabToCamel(input);
    std::cout << output << std::endl;

    return 0;
}