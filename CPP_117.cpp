#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <sstream>

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    std::string word;

    while (iss >> word) {
        if (word.size() > n) {
            words.push_back(word);
        }
    }
    return words;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}