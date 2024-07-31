#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(const map<char, int>& a, const map<char, int>& b){
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("abbccc"), {{'c', 3}}));
    assert(issame(histogram("abc"), {{'a', 1}, {'b', 1}, {'c', 1}});

    return 0;
}

map<char, int> histogram(string test) {
    if (test.empty()) {
        return {};
    }

    map<char, int> freq;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            freq[c]++;
        }
    }

    map<char, int> result;
    int maxFreq = 0;
    for (const auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}