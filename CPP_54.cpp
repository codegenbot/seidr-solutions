#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string sorted_s0 = s0;
    std::string sorted_s1 = s1;

    sort(sorted_s0.begin(), sorted_s0.end());
    sort(sorted_s1.begin(), sorted_s1.end());

    return sorted_s0 == sorted_s1;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);

    return 0;
}