Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
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
        if (!result.empty()) {
            result += std::toupper(word[0]);
        } else {
            result += word;
        }
        for (size_t i = 1; i < word.size(); ++i) {
            result += std::tolower(word[i]);
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}