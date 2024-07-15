#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(const map<char, int> &a, const map<char, int> &b){
    return a == b;
}

map<char, int> histogram(string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here
    return 0;
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
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxCountChars;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxCountChars[entry.first] = entry.second;
        }
    }
    return maxCountChars;
}