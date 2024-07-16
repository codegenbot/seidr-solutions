#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(std::string s0, std::string s1) {
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    assert(same_chars("hello", "olleh") == true);
    assert(same_chars("123", "321") == true);
    assert(same_chars("apple", "banana") == false);
    
    return 0;
}