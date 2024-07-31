#include <iostream>
#include <map>
#include <cassert>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (isalpha(c) && islower(c)) {
            freq[c]++;
        }
    }
    int maxFreq = 0;
    for (const auto& p : freq) {
        maxFreq = max(maxFreq, p.second);
    }
    map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == maxFreq) {
            result[p.first] = p.second;
        }
    }
    return result;
}