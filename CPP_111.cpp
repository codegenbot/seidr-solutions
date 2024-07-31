#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

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
    map<char, int> result;
    int max_freq = 0;
    for (const auto& pair : freq) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == max_freq) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}