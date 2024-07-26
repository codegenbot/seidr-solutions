#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> words_string(std::string str) {
    std::vector<std::string> words;
    std::string word;
    for (char c : str) {
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
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}