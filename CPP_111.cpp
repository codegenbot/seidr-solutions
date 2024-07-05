#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>

using namespace std;

map<char, int> histogram(const string& test) {
    map<char, int> freqMap;
    for (char c : test) {
        freqMap[c]++;
    }
    
    int maxFreq = 0;
    for (const auto &entry : freqMap) {
        maxFreq = max(maxFreq, entry.second);
    }
    
    map<char, int> result;
    for (const auto &entry : freqMap) {
        if (entry.second == maxFreq) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}

template <typename K, typename V>
bool issame(const map<K, V>& a, const map<K, V>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    assert(issame(histogram("abc"), {{'a', 1}, {'b', 1}, {'c', 1}}));
    assert(issame(histogram("abac"), {{'a', 2}}));
    cout << "All tests passed!" << endl;
    return 0;
}