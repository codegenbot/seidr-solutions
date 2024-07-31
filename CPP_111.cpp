#include <map>
#include <string>
#include <cassert>

using namespace std;

bool are_same(const std::map<char, int>& a, const std::map<char, int>& b) {
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
    // Test cases for histogram function
    assert(are_same(histogram("a"), std::map<char, int>{{'a', 1}}));
    assert(are_same(histogram("test"), std::map<char, int>{{'t', 2}, {'e', 1}, {'s', 1}}));
    assert(are_same(histogram(""), std::map<char, int>{})); // Empty string case

    return 0;
}