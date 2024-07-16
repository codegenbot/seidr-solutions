#include <vector>
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
        size_t dashIndex = 0;
        while (dashIndex < word.size() && word[dashIndex] != '-') {
            ++dashIndex;
        }
        if (dashIndex == word.size()) {
            result += word;
        } else {
            result += word.substr(0, dashIndex);
            result[0] -= 'a' - 'A';
            for (size_t i = 1; i < dashIndex; ++i) {
                result[i] = toupper(result[i]);
            }
            result += word.substr(dashIndex + 1).substr(0, 1);
            for (size_t i = 1; i < word.size() - dashIndex - 1; ++i) {
                result.push_back(tolower(word[dashIndex + i]));
            }
            result += word.substr(dashIndex + 1).substr(1);
        }
        if (&word != &words.back()) {
            result += " ";
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