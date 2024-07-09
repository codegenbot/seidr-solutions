#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else if (std::isalpha(c)) {
            if (std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u') {
                count++;
            }
            word += c;
        }
    }
    if (count == n) {
        result.push_back(word);
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}