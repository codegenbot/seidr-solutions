```cpp
#include <iostream>
#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result;
    for (auto x : s1) {
        if (s2.count(x)) {
            result.insert(x);
        }
    }

    vector<int> v(result.begin(), result.end());
    sort(v.begin(), v.end());
    return v;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}