#include <iostream>
#include <map>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& entry : count) {
        maxCount = std::max(maxCount, entry.second);
    }

    for (const auto& entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

int main() {
    assert(histogram("a") == std::map<char, int>{{'a', 1}});
    return 0;
}