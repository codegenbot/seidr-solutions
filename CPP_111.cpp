#include <iostream>
#include <sstream>
#include <map>

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
    map<char, int> result = histogram("a");

    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}