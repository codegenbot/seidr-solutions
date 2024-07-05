#include <string>
#include <set>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::set<char> set0(s0.begin(), s0.end());
    std::set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
}