#include <iostream>
#include <string>
#include <algorithm>

bool same_chars(std::string s0, std::string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    return s0 == s1;
}

int main() {
    assert (same_chars("aabb", "aaccc") == false);
    // rest of your code
}