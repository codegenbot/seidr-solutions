#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

bool issame(const std::map<char, int> &a, const std::map<char, int> &b) {
    return a == b;
}

std::map<char, int> histogram(const std::string &test) {
    std::map<char, int> counts;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char c : word) {
            counts[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = std::max(maxCount, pair.second);
    }
    std::map<char, int> result;
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}