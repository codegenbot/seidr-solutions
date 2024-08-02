#include <iostream>
#include <string>
#include <vector>

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
        size_t pos = 0;
        while (pos < word.size() && word[pos] == '-') {
            ++pos;
        }
        if (!result.empty()) {
            result += char(toupper(word[0]));
        } else {
            result += word.substr(0, 1);
        }
        result += word.substr(pos).substr(1);
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