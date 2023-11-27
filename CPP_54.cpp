#include <string>
#include <algorithm>

bool same_chars(std::string s0, std::string s1) {
    // Sort both strings
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());

    // Check if the sorted strings are equal
    return s0 == s1;
}