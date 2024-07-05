#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    char letter;
    while (ss >> letter) {
        freq[letter]++;
    }

    int max_count = 0;
    for (const auto& [key, value] : freq) {
        max_count = max(max_count, value);
    }

    map<char, int> result;
    for (const auto& [key, value] : freq) {
        if (value == max_count) {
            result[key] = value;
        }
    }

    return result;
}

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

int main() {
    assert(issame(histogram("a") , {{'a', 1}}));
    assert(issame(histogram("aaa bbb ccc a b c ") , {{'a', 2}, {'b', 2}, {'c', 2}}));
    cout << "All tests passed!" << endl;
    return 0;
}