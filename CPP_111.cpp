#include <iostream>
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
        char first_char = word.empty() ? '\0' : word[0];
        if (first_char != '\0') {
            freq[first_char]++;
        }
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

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("a a b"), {{'a', 2}}));
    assert(issame(histogram("c b b a a"), {{'a', 2}, {'b', 2}}));
    cout << "All tests passed!" << endl;
    return 0;
}