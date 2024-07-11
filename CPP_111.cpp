#include <map>
#include <algorithm>

bool issame(const map<char,int>& a, const map<char,int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) {
            return false;
        }
    }

    return true;
}

map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxCount = max(maxCount, freq[c]);
        }
    }

    for (const auto& pair : freq) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}