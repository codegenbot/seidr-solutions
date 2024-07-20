#include <map>
#include <iostream>

using namespace std;

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b);

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto it : count) {
        maxCount = max(maxCount, it.second);
    }

    for (auto it : count) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }

    return result;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}