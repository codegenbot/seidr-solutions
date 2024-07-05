#include <iostream>
#include <map>
#include <sstream>
#include <cassert>
using namespace std;

map<char, int> histogram(const string &test) {
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

bool issame(const map<char, int> &a, const map<char, int> &b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("abac"), {{'a', 2}}));
    cout << "All test cases passed." << endl;
    return 0;
}