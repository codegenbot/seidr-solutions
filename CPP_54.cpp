#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp0 = s0;
    std::string temp1 = s1;
    std::sort(temp0.begin(), temp0.end());
    std::sort(temp1.begin(), temp1.end());
    return temp0 == temp1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);
    return 0;
}