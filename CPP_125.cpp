#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <sstream>

std::vector<std::string> split_words(std::string str) {
    std::vector<std::string> words;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}