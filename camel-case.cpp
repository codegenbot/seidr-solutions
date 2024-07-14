#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> parts = {};
    size_t start = 0;
    for (size_t end = 0; end <= str.size(); ++end) {
        if (end == str.size() || str[end] != '-') {
            parts.push_back(str.substr(start, end - start));
            start = end + 1;
        }
    }

    std::string result = parts[0];
    for (size_t i = 1; i < parts.size(); ++i) {
        result += std::string(1, char(toupper(parts[i][0])));
        result += parts[i].substr(1);
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl; // nospaceordash
    std::cout << camelCase("two-words") << std::endl; // twoWords
    std::cout << camelCase("two words") << std::endl; // two words
    std::cout << camelCase("all separate words") << std::endl; // all separate words

    return 0;
}