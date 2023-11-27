#include <iostream>
#include <string>
#include <map>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> counts;

    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }

    int maxCount = 0;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }

    std::map<char, int> result;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }

    return result;
}