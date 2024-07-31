#include <map>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

bool are_equal(const std::map<char, int>& a, const std::map<char, int>& b) {
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

void test() {
    assert(are_equal(histogram("a"), std::map<char, int>{{'a', 1}}));
    assert(are_equal(histogram("test"), std::map<char, int>{{'t', 2}, {'e', 1}, {'s', 1}}));
    assert(are_equal(histogram(""), std::map<char, int>{})); // Empty string case
}

int main() {
    test();

    return 0;
}