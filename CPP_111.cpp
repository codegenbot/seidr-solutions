#include <algorithm>
#include <cassert>

bool issame(unordered_map<char, int> a, unordered_map<char, int> b);

unordered_map<char, int> histogram(string test);

bool issame(unordered_map<char, int> a, unordered_map<char, int> b) {
    return a == b;
}

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    unordered_map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    return maxChars;
}