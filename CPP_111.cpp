#include <map>
#include <string>
#include <climits>

using namespace std;

bool isSame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (auto it : a) {
        char c = it.first;
        if (b.find(c) == b.end() || b[c] != a[c]) {
            return false;
        }
    }

    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = INT_MIN;
    for (auto it : count) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    for (auto it : count) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }

    return result;
}