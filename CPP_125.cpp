#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::string& input) {
    std::vector<std::string> b = split_words(input);
    return a.size() == b.size();
}

std::vector<std::string> split_words(const std::string& input) {
    std::vector<std::string> words;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}