#include <bits/stdc++.h>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    
    while (ss >> word) {
        for (char c : word) {
            freq[c]++;
        }
    }
    
    map<char, int> result;
    int maxFreq = 0;
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            result.clear();
            result[it->first] = it->second;
        } else if (it->second == maxFreq) {
            result[it->first] = it->second;
        }
    }
    
    return result;
}