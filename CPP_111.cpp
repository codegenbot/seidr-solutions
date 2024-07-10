#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (auto &c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto &pair : count) {
        maxCount = max(maxCount, pair.second);
    }

    for (auto &pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}