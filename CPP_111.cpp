#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(const std::map<char, int>& a, const std::map<char, int>& b){
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
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    
    map<char, int> mostRepeatedChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeatedChars[entry.first] = entry.second;
        }
    }
    
    return mostRepeatedChars;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}