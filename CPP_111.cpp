#include <iostream>
#include <map>
#include <cassert>
#include <algorithm>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}

bool issame(map<char, int> a, map<char, int> b){
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
    for (const auto& p : freq) {
        maxFreq = max(maxFreq, p.second);
    }
    map<char, int> result;
    for (const auto& p : freq) {
        if (p.second == maxFreq) {
            result[p.first] = p.second;
        }
    }
    return result;
}