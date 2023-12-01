#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;

map<string, int> histogram(string test) {
    map<string, int> result;
    string word;
    for (char c : test) {
        if (c != ' ') {
            word += c;
        } else {
            if (!word.empty()) {
                result[word]++;
                word = "";
            }
        }
    }
    if (!word.empty()) {
        result[word]++;
    }
    return result;
}

bool issame(map<string, int> a, initializer_list<pair<const string, int>> b) {
    return a == map<string, int>(b);
}

int main() {
    assert(issame(histogram("a"), {{"a", 1}}));
    assert(issame(histogram("hello world"), {{"hello", 1}, {"world", 1}}));
    assert(issame(histogram("hello hello"), {{"hello", 2}}));
    cout << "All test cases passed!" << endl;
    return 0;
}