#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            words.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += toupper(words[i][0]);
            result += tolower(std::string(1, words[i].begin() + 1, words[i].end()));
        } else {
            result += tolower(words[i]);
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << "\n";
    std::cout << camelCase("two-words") << "\n";
    std::cout << camelCase("two words") << "\n";
    std::cout << camelCase("all separate words") << "\n";

    return 0;
}