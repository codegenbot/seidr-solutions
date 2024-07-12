#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += std::toupper(words[i][0]);
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;