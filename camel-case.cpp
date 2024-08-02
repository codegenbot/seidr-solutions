#include <iostream>
#include <string>
#include <vector>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            words.push_back(s.substr(i - start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char(std::toupper(words[i][0]));
            result.erase(0, 1);
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}