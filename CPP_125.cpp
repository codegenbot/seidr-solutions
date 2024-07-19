#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<std::string> split_words(const std::string &s) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}