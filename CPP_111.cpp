#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;
    int maxCount = 0;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }
    
    for (auto& entry : count) {
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