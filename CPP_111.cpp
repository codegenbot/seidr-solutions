#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> histogram(string test);

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }

    int maxFreq = 0;
    for (const auto& pair : freq) {
        maxFreq = max(maxFreq, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : freq) {
        if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // Add more test cases here...

    return 0;
}