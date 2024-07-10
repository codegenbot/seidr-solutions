#include <iostream>
#include <map>
#include <string>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto &pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char, int> result;
    for (const auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}