#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test);

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> count;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = std::max(maxCount, count[c]);
        }
    }

    for (auto &entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}