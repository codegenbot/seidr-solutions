#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    for (char c : s) {
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
    
    if (n >= 0 && n < words.size()) {
        std::vector<std::string> selected_words;
        for (int i = n; i < words.size(); ++i) {
            selected_words.push_back(words[i]);
        }
        return selected_words;
    }
    
    return {};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e", "f"}));
    return 0;
}