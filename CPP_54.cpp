#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string s0_copy = s0;
    std::string s1_copy = s1;

    // Sort the strings
    std::sort(s0_copy.begin(), s0_copy.end());
    std::sort(s1_copy.begin(), s1_copy.end());

    // Check if the sorted strings are equal
    return s0_copy == s1_copy;
}

int main() {
    assert(same_chars("aabb", "aaccc") == false);

    return 0;
}