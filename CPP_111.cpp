#include <iostream>
#include <map>
#include <cassert>
#include <cctype>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> freq;
    for (char c : test) {
        if (isalpha(c) && islower(c)) {
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

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}