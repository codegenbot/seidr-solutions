#include <iostream>
#include <map>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

map<char, int> histogram(string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : freq) {
        maxCount = max(maxCount, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}