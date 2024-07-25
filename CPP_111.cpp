#include <iostream>
#include <unordered_map>
#include <cassert>

using namespace std;

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> result;
    unordered_map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& entry : count) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }

    for (const auto& entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

bool issame(const unordered_map<char, int>& a, const unordered_map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}