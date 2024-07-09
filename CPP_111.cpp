#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    string test = "hello world";
    map<char, int> result = histogram(test);
    
    for (const auto& entry : result) {
        cout << entry.first << ": " << entry.second << endl;
    }
    
    map<char, int> testMap = {{'a', 1}, {'b', 2}};
    cout << issame(testMap, testMap) << endl;
    
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
    for (const auto& entry : result) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }
    map<char, int> maxCountLetters;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxCountLetters[entry.first] = entry.second;
        }
    }
    return maxCountLetters;
}