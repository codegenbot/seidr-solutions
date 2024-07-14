#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    size_t start = 0;
    while (start < s.size()) {
        size_t end = start;
        while (end + 1 < s.size() && s[end + 1] != '-') {
            end++;
        }
        words.push_back(s.substr(start, end - start + 1));
        start = end + 2;
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}