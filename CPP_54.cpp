#include <cassert>
#include <algorithm>
#include <string>

bool same_chars(const std::string &s0, const std::string &s1) {
    std::string s0_copy = s0;
    std::string s1_copy = s1;
  
    std::sort(s0_copy.begin(), s0_copy.end());
    std::sort(s1_copy.begin(), s1_copy.end());
  
    return s0_copy == s1_copy;
}

assert(same_chars(std::string("aabb"), std::string("aaccc")) == false);