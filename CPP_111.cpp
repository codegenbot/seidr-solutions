#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> counts;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            counts[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> result;
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}