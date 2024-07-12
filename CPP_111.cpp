#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto& entry : result) {
        max_count = max(max_count, entry.second);
    }
    
    map<char, int> max_occurrences;
    for (const auto& entry : result) {
        if (entry.second == max_count) {
            max_occurrences[entry.first] = entry.second;
        }
    }
    
    return max_occurrences;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}