#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> words;
    std::string word;
    std::istringstream iss(s);
    
    for (int i = 0; i < n; ++i) {
        iss >> word;
    }
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main {
    std::string s;
    int n;
    std::cin >> s >> n;
    
    std::vector<std::string> words = select_words(s, n);

    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    assert(issame(words, select_words(s, n));

    return 0;
}