#include <map>
#include <sstream>
#include <algorithm>
#include <cassert>

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    map<char, int> mostRepeated;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeated[entry.first] = entry.second;
        }
    }
    return mostRepeated;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}