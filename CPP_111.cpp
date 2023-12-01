#include <iostream>
#include <map>
#include <cassert>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    cout << "Test passed!" << endl;
    
    return 0;
}