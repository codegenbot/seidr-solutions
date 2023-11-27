#include<iostream>
#include<map>
#include<string>
#include<cassert>

using namespace std;

map<string, int> histogram(string test) {
    map<string, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (char c : test) {
        if (c == ' ') {
            result[letter]++;
            letter = "";
        } else {
            letter += c;
        }
    }
    result[letter]++;
    return result;
}

int main() {
    assert(histogram("a") == map<string, int>{{"a", 1}});
    assert(histogram("hello world") == map<string, int>{{"hello", 1}, {"world", 1}});

    cout << "All tests passed!" << endl;

    return 0;
}