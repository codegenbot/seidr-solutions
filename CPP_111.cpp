#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases if needed
    return 0;
}

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
    for (const auto &pair : result) {
        maxCount = std::max(maxCount, pair.second);
    }
    std::map<char, int> maxCountChars;
    for (const auto &pair : result) {
        if (pair.second == maxCount) {
            maxCountChars[pair.first] = pair.second;
        }
    }
    return maxCountChars;
}