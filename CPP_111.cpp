#include <iostream>
#include <map>
#include <string>
#include <cassert>

bool issame(std::map<char,int> a, std::map<char,int> b) {
    return a == b;
}

std::map<char,int> histogram(std::string test) {
    std::map<char,int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto &pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char,int> result;
    for (const auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    assert(issame(histogram("a"), std::map<char,int>{{'a', 1}}));

    return 0;
}