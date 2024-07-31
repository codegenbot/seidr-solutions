#include <iostream>
#include <sstream>
#include <unordered_map>
#include <cassert>

using namespace std;

bool issame(unordered_map<char, int> a, unordered_map<char, int> b) {
    return a == b;
}

unordered_map<char, int> histogram(string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
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