#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            words.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }
    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += char(std::toupper(word[0]));
            result.erase(0, 1);
        } else {
            result += word;
        }
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl; // output: nospaceordash
    std::cout << camelCase("two-words") << std::endl; // output: twoWords
    std::cout << camelCase("two words") << std::endl; // output: two words
    std::cout << camelCase("all separate words") << std::endl; // output: all separate words
    return 0;
}