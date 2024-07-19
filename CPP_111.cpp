#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

bool issame(map<char, int> a, map<char, int> b) {
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
    map<char, int> maxCountLetters;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxCountLetters[entry.first] = entry.second;
        }
    }
    return maxCountLetters;
}

int main() {
    string test = "hello world";
    map<char, int> result = histogram(test);
    
    for (const auto& entry : result) {
        cout << entry.first << ": " << entry.second << endl;
    }
    
    map<char, int> a = {{'a', 1}, {'b', 2}, {'c', 3}};
    map<char, int> b = {{'a', 1}, {'b', 2}, {'c', 3}};
    
    cout << "Is a same as b: " << issame(a, b) << endl;
    
    return 0;
}