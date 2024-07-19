#include <vector>
bool common(vector<int> a, vector<int> b) {
    std::set<int> s1(a.begin(), a.end());
    std::set<int> s2(b.begin(), b.end());
    return (s1 == s2 || s1.issubset(s2) || s2.issubset(s1));
}