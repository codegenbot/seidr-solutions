#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::stringstream ss(test);
    std::string word;

    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }

    return maxChars;
}

void main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}