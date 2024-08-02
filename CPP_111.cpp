#include <bits/stdc++.h>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }

    for (auto &entry : count) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }

    return result;
}

bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}