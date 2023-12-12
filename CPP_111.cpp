#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> m;
    for (int i = 0; i < test.size(); i++) {
        char c = test[i];
        if (m.find(c) == m.end()) {
            m[c] = 1;
        } else {
            m[c]++;
        }
    }
    return m;
}