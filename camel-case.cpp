#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (const auto& word : words) {
        size_t dashIndex = word.find('-');
        if (dashIndex != std::string::npos) {
            result += toUpper(word.substr(0, dashIndex));
            result += word.substr(dashIndex + 1);
        } else {
            result += word;
        }
    }

    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << "\n";
    std::cout << kebabToCamel("two-words") << "\n";
    std::cout << kebabToCamel("two words") << "\n";
    std::cout << kebabToCamel("all separate words") << "\n";
    return 0;
}