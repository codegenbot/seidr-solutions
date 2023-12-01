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

int main() {
    assert(histogram("a") == map<string, int>{{"a", 1}});
    assert(histogram("hello world") == map<string, int>{{"hello", 1}, {"world", 1}});
    assert(histogram("hello hello") == map<string, int>{{"hello", 2}});
    cout << "All test cases passed!" << endl;
    return 0;
}