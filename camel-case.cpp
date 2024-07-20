```
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            }
            first = true;
        } else {
            if (first) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::vector<std::string> words;
        for (const auto& word : line.split(' ')) {
            if (!words.empty()) {
                result += camelCase(word);
            } else {
                result = camelCase(word);
            }
            words.clear();
        }
    }
}