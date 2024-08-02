#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert (issame(histogram("a"), {{'a', 1}}));
    return 0;
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
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
    map<char, int> mostRepeated;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            mostRepeated[pair.first] = pair.second;
        }
    }
    return mostRepeated;
}