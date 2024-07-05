#include<unordered_set>

bool same_chars(string s0, string s1) {
    unordered_set<char> set0(s0.begin(), s0.end());
    unordered_set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
}