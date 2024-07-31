#include <iostream>
#include <map>
#include <cassert>
#include <cctype>
#include <string>
#include <algorithm>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(std::string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> freq;
    for (char c : test) {
        if (std::isalpha(c) && std::islower(c)) {
            freq[c]++;
        }
    }
    int maxFreq = 0;
    for (const auto& p : freq) {
        maxFreq = std::max(maxFreq, p.second);
    }
    std::map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == maxFreq) {
            result[p.first] = p.second;
        }
    }
    return result;
}  