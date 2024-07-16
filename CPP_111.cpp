#include <iostream>
#include <map>
#include <cassert>

using namespace std;

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

map<char, int> histogram(string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = max(maxCount, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}