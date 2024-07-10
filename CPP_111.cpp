#include <iostream>
#include <map>
#include <string>
#include <cassert>

bool issame(std::map<std::char, int> a, std::map<std::char, int> b) {
    return a == b;
}

std::map<std::char, int> histogram(std::string test) {
    std::map<std::char, int> count;

    for (std::char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto &pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<std::char, int> result;
    for (const auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}