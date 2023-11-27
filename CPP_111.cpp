#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(string test);

bool issame(map<char, int> a, map<char, int> b) {
    // Compare map contents and return true if they are the same, false otherwise
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] == ' ') {
            if (result.find(word[0]) == result.end()) {
                result[word[0]] = 1;
            } else {
                result[word[0]] += 1;
            }
            word = "";
        } else {
            word += test[i];
        }
    }
    if (word != "") {
        if (result.find(word[0]) == result.end()) {
            result[word[0]] = 1;
        } else {
            result[word[0]] += 1;
        }
    }
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}