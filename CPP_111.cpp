#include <iostream>
#include <map>
#include <sstream>
#include <cassert>
using namespace std;

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string token;
    while (iss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxOccurrences;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    return maxOccurrences;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}