#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <cassert>

std::map<char, int> histogram(std::string test){
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char, int> maxChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxChars[entry.first] = entry.second;
        }
    }
    return maxChars;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}