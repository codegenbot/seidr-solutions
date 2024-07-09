#include <iostream>
#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    copy(std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), result.begin()), result.begin() + 0, result.begin() + std::distance(result.begin(), result.end()));
    
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}