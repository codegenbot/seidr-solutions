#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
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
    map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }
    return maxChars;
}

int main() {
    // Test the histogram function
    map<char, int> result = histogram("hello world");
    map<char, int> expected = {{'l', 3}};
    
    assert(issame(result, expected));
    
    return 0;
}