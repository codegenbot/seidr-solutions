#include <map>
#include <algorithm>

bool issame(const map<char,int>& a, const map<char,int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
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