#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    std::string word;
    for (char c : input) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();    
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}