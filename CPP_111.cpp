#include <iostream>
#include <map>
#include <cassert>

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> result;
    std::map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = std::max(maxCount, pair.second);
    }
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}