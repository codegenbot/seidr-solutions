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

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), map<char, int>{{'a', 1}}));
    assert(issame(histogram("hello world"), map<char, int>{{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}}));
    
    cout << "All tests passed!" << endl;
    
    return 0;
}