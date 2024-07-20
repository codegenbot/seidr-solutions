#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <cassert>

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> resultMap;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            resultMap[entry.first] = entry.second;
        }
    }
    return resultMap;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases as needed
    return 0;
}