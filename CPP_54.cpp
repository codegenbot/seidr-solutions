#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string &s0, const std::string &s1) {
    std::string copy_s0 = s0;
    std::string copy_s1 = s1;

    std::sort(copy_s0.begin(), copy_s0.end());
    std::sort(copy_s1.begin(), copy_s1.end());
    
    return copy_s0 == copy_s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);

    return 0;
}