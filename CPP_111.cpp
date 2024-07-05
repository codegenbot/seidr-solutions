#include <iostream>
#include <map>
#include <sstream>
#include <cassert>
#include <string>

using namespace std;

map<char,int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    char ch;
    while (ss >> ch) {
        freq[ch]++;
    }
    int max_count = 0;
    for (const auto &p : freq) {
        if (p.second > max_count) {
            max_count = p.second;
        }
    }
    map<char, int> result;
    for (const auto &p : freq) {
        if (p.second == max_count) {
            result[p.first] = p.second;
        }
    }
    return result;
}

bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("test"), {{'t', 2}}));
    assert(issame(histogram("success"), {{'s', 3}}));
    cout << "All tests passed!" << endl;
    return 0;
}