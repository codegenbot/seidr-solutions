```
#include <algorithm>
#include <string>
#include <iostream>
#include <ostream>
#include <cassert>

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    cout << same_chars("abcde", "edcba") << endl;
}