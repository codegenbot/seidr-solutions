#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::stringstream ss(test);
    std::string token;

    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }

    int maxCount = 0;
    for (auto it : result) {
        maxCount = std::max(maxCount, it.second);
    }

    std::map<char, int> maxLetters;
    for (auto it : result) {
        if (it.second == maxCount) {
            maxLetters[it.first] = it.second;
        }
    }

    return maxLetters;
}