#include <iostream>
#include <sstream>
#include <map>
#include <iterator>
#include <algorithm>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> counts;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
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

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}