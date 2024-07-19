#include <vector>
#include <set>
#include <algorithm>

bool common(std::vector<int> a, std::vector<int> b) {
    std::set<int> s1(a.begin(), a.end());
    std::set<int> s2(b.begin(), b.end());

    return (s1 == s2 || s1.issubset(s2) || s2.issubset(s1));
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == true); 
    return 0;
}