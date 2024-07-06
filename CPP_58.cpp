#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result;
    for (int i : s1) {
        if (s2.find(i) != s2.end()) {
            result.insert(i);
        }
    }

    std::vector<int> res;
    for (int i : result) {
        res.push_back(i);
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}