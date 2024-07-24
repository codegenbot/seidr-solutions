#include <algorithm>
#include <string>
#include <iostream>

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    cout << boolalpha << same_chars("aabb", "aaccc") << endl;  
    return 0;
}