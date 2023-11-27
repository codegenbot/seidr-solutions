#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool same_chars(string s0, string s1){
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert (same_chars("aabb", "aaccc") == false);
    assert (same_chars("abc", "cba") == true);
    assert (same_chars("hello", "olleh") == true);
    assert (same_chars("world", "wordl") == false);
    
    return 0;
}