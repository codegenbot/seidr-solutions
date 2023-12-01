#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (auto it = a.begin(); it != a.end(); it++) {
        char key = it->first;
        int value = it->second;
        if (b.find(key) == b.end() || b[key] != value) {
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> countMap;
    string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else {
            if (countMap.find(word[0]) == countMap.end()) {
                countMap[word[0]] = 1;
            } else {
                countMap[word[0]]++;
            }
            word = "";
        }
    }
    if (word != "") {
        if (countMap.find(word[0]) == countMap.end()) {
            countMap[word[0]] = 1;
        } else {
            countMap[word[0]]++;
        }
    }
    int maxCount = 0;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    map<char, int> result;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}