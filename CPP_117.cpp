#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>
#include <string>

std::vector<std::string> select_words(const std::string& sentence, int n) {
    std::vector<std::string> words;
    std::istringstream iss(sentence);
    std::string word;
    while(iss >> word) {
        words.push_back(word);
        if(words.size() == n) break;
    }
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 4), std::vector<std::string>{"a", "b", "c", "d"}));
    return 0;
}