#include <iostream>
#include <map>

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }
    
    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}

int main() {
    // Your test cases here
    return 0;
}