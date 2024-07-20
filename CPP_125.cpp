#include <iostream>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& txt) {
    std::vector<std::string> words;
    std::istringstream iss(txt);
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}