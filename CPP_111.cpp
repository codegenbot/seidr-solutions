#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string word;
    for (char c : test) {
        if (c == ' ') {
            for (char w : word) {
                result[w]++;
            }
            word = "";
        } else {
            word += c;
        }
    }
    for (char w : word) {
        result[w]++;
    }
    return result;
}

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    map<char, int> expected1 = {{'a', 1}};
    assert(issame(histogram("a"), expected1));

    map<char, int> expected2 = {{'h', 1}, {'e', 1}, {'l', 2}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    assert(issame(histogram("hello world"), expected2));

    cout << "All tests passed!" << endl;

    return 0;
}