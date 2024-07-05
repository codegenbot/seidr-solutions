#include <sstream>
#include <algorithm>

map<char, int> histogram(string test) {
    map<char, int> freqMap;
    stringstream ss(test);
    string letter;
    
    while (ss >> letter) {
        freqMap[letter[0]]++;
    }
    
    int maxFreq = 0;
    for (const auto &entry : freqMap) {
        maxFreq = max(maxFreq, entry.second);
    }
    
    map<char, int> result;
    for (const auto &entry : freqMap) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}