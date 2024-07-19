#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& str) {
    std::vector<std::string> words;
    int start = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }
    words.push_back(str.substr(start)); // Add the last word
    return words;
}

int main() {
    assert(issame(split_words(""), {""}));
    return 0;
}