#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> split_words(std::string str) {
    std::vector<std::string> words;
    // Implementation for splitting the string into words
    return words;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}