#include <vector>
#include <string>
#include <cassert>
#include <sstream>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

std::vector<std::string> select_words(const std::string& input, int word_count) {
    std::vector<std::string> words;
    std::istringstream iss(input);
    std::string word;

    for (int i = 0; i < word_count; ++i) {
        if (iss >> word) {
            words.push_back(word);
        }
    }

    return words;
}