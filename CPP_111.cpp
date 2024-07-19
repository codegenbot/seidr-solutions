#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) {
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    // Test cases
    assert(issame(histogram("aba"), {{'a', 2}})); // Test case 1
    assert(issame(histogram("hello"), {{'l', 2}})); // Test case 2
    assert(issame(histogram("cpp contest"), {{' ', 1}, {'c', 2}, {'p', 2}, {'t', 2}})); // Test case 3

    return 0;
}