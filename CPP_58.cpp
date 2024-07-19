```cpp
#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return (s1 == s2 || s1.issubset(s2) || s2.issubset(s1));
}