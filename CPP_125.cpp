#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

bool issame(std::vector<std::string> a) {
    return std::equal(a.begin(), a.end(), a.begin());
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
    assert(issame(split_words("")));
    return 0;
}