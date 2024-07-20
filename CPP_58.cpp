#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> result;
    for (auto x : s1) {
        if (s2.count(x)) {
            result.insert(x);
        }
    }

    std::vector<int> v(result.begin(), result.end());
    sort(v.begin(), v.end());
    return v;
}