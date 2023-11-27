#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

map<string, int> histogram(string test) {
    map<string, int> result;
    if (test.empty()) {
        return result;
    }
    string word;
    for (char c : test) {
        if (c == ' ') {
            result[word]++;
            word = "";
        } else {
            word += c;
        }
    }
    result[word]++;
    return result;
}

bool issame(const map<string, int>& a, const map<string, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }

    return true;
}

int main() {

    map<string, int> expected1 = {{"a", 1}};
    assert(issame(histogram("a"), expected1));

    map<string, int> expected2 = {{"hello", 1}, {"world", 1}};
    assert(issame(histogram("hello world"), expected2));

    cout << "All tests passed!" << endl;

    return 0;
}