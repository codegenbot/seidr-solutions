#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test); // Forward declaration

bool issame(const map<char, int>& a, const map<char, int>& b) { 
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto &entry : count) {
        maxCount = max(maxCount, entry.second);
    }

    for (const auto &entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}