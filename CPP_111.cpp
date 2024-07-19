#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> counts;
    
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for (auto it : counts) {
        maxCount = max(maxCount, it.second);
    }
    
    for (auto it : counts) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}