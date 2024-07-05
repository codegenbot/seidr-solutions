#include <string>
#include <unordered_set>

bool same_chars(std::string s0, std::string s1) {
    std::unordered_set<char> set0(s0.begin(), s0.end());
    std::unordered_set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
}