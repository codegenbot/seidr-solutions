#include <cassert>
#include <iostream>
#include <map>
#include <string>

std::map<char, int> histogram(std::string test);

std::map<char, int> histogram(std::string test) {
    std::map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = std::max(maxFreq, pair.second);
    }
    
    std::map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    // Your test cases here
    return 0;
}