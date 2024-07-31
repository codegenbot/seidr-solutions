#include <map>
#include <string>
#include <algorithm>
#include <cassert>

bool is_same(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> result;

    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }

    return maxChars;
}

int main() {
    assert(is_same(histogram("a"), {{'a', 1}}));
    return 0;
}