#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

using namespace std;

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = max(maxCount, pair.second);
    }
    map<char, int> mostRepeated;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            mostRepeated.insert(pair);
        }
    }
    return mostRepeated;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}