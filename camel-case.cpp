#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            words.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::toupper(word[0]);
            result.erase(0, 1);
        } else {
            if (word.find('-') != std::string::npos) {
                size_t dashPos = word.find('-');
                result += std::tolower(word.substr(0, dashPos));
                result += std::toupper(word.substr(dashPos + 1));
                word = "";
            } else {
                result += word;
            }
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