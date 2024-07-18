#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

std::map<char, int> histogram(std::string test);

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
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

bool is_same(std::map<char, int>& a, std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(is_same(histogram("a"), {{'a', 1}}));
    return 0;
}