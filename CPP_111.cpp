#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

int main() {
    map<char, int> result = histogram("a");
    map<char, int> expected = {{'a', 1}};
    
    assert (result == expected);

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