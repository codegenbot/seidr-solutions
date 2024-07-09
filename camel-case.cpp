#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::vector<std::string> words;
    size_t start = 0, end;
    while ((end = input.find('-')) != std::string::npos) {
        words.push_back(input.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(input.substr(start));

    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
        } else {
            result += word;
        }
        result += std::string(1, towupper(word[1]));
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase equivalent: " << kebabToCamel(input) << std::endl;

    return 0;
}