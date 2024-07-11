#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    size_t start = 0;
    while (start < s.size()) {
        if (s[start] == '-') {
            for (size_t i = start + 1; i < s.size() && s[i] != ' '; i++) {
                if (i > start) {
                    words.push_back(std::string(1, s[start]));
                }
                start = i;
                break;
            }
        } else {
            size_t end = start;
            while (end < s.size() && s[end] != '-') {
                end++;
            }
            words.push_back(s.substr(start, end - start));
            start = end + 1;
        }
    }
    std::string result = "";
    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += (result.back() >= 'A' && result.back() <= 'Z') ? "" : " ";
        }
        for (char c : words[i]) {
            if (c >= 'a' && c <= 'z') {
                result += static_cast<char>(c - ('a' - 'A'));
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << '\n';
    }
    return 0;
}