#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b; // Compare two maps for equality
}

map<char, int> histogram(string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("hello"), {{'l', 2}}));
    return 0;
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