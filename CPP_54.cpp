#include <string>
#include <algorithm>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}