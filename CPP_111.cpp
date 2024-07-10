#include <iostream>
#include <map>
#include <cassert>

using namespace std;

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> counts;
    int maxCount = 0;
    
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
            maxCount = max(maxCount, counts[c]);
        }
    }
    
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}