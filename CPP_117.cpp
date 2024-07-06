#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (select_words(a[i], 'x') != select_words(b[i], 'o')) {
            return false;
        }
    }
    return true;
}

std::string select_words(const std::string& word, char symbol) {
    for (char c : word) {
        if (c == symbol) {
            return word;
        }
    }
    return "";
}