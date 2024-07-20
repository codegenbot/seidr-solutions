#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

bool issame(std::vector<std::string> a, std::vector<std::string> b ) {
    if (a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
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
    assert(issame(split_words(""), {}));
    return 0;
}