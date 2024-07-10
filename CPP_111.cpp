#include <iostream>
#include <map>
#include <cassert>
#include <string>

bool issame(std::map<std::char, int> a, std::map<std::char, int> b) {
    return a == b;
}

std::map<std::char, int> histogram(std::string test) {
    std::map<std::char, int> result;
    std::map<std::char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}