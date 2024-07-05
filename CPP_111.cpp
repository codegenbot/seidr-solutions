#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <assert.h>

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

bool issame(map<char,int> a, map<char,int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("a b"), {{'a', 1}, {'b', 1}}));
    assert(issame(histogram("apple banana cherry date"), {{'a', 2}}));
    return 0;
}