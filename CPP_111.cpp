#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        freq[word[0]]++;
    }

    int max_count = 0;
    for (const auto &p : freq) {
        max_count = max(max_count, p.second);
    }

    map<char, int> result;
    for (const auto &p : freq) {
        if (p.second == max_count) {
            result[p.first] = p.second;
        }
    }

    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a a b c"), {{'a', 2}}));
    assert(issame(histogram("hello world program in cpp"), {{'p', 2}}));
    assert(issame(histogram("cpp code cpp code"), {{'c', 2}, {'c', 2}}));
    assert(issame(histogram("java python java python python"), {{'p', 3}}));
    return 0;
}