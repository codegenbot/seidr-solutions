#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        freq[c]++;
    }
    
    int max_count = 0;
    for (const auto& [key, value] : freq) {
        max_count = max(max_count, value);
    }
    
    map<char, int> result;
    for (const auto& [key, value] : freq) {
        if (value == max_count) {
            result[key] = value;
        }
    }
    
    return result;
}

bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("test"), {{'t', 2}}));
    cout << "All tests passed!" << endl;
    return 0;
}