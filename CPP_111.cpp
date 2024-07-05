#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <cassert>

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> freqMap;
    for (char ch : test) {
        if (std::isalpha(ch)) {
            freqMap[std::tolower(ch)]++;
        }
    }

    int maxFreq = 0;
    for (const auto &entry : freqMap) {
        maxFreq = std::max(maxFreq, entry.second);
    }

    std::map<char, int> result;
    for (const auto &entry : freqMap) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("aaabb"), {{'a', 3}}));
    assert(issame(histogram("ababab"), {{'a', 3}, {'b', 3}}));
    assert(issame(histogram("test"), {{'t', 2}}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}