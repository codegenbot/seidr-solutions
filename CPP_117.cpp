#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

std::vector<std::string> select_words(const std::string &s, int n) {
    std::istringstream iss(s);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        if (word.size() > n)
            words.push_back(word);
    }
    return words;
}

int main() {
    std::string s;
    int n;
    std::cin >> s >> n;
    
    std::vector<std::string> words = select_words(s, n);

    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    
    assert(issame(words, select_words(s, n));

    return 0;
}