#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string word;
    std::istringstream iss(s);
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    std::vector<std::string> selected_words;
    
    for (size_t i = n; i < words.size(); ++i) {
        selected_words.push_back(words[i]);
    }
    
    return selected_words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}