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

bool issame(map<string, int> a, map<string, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), histogram("a")));
    assert(issame(histogram("hello world"), histogram("hello world")));
    assert(issame(histogram("hello hello"), histogram("hello hello")));
    cout << "All test cases passed!" << endl;
    return 0;
}