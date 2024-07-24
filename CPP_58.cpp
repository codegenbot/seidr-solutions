```cpp
#include <algorithm>
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            throw std::runtime_error("Vectors contain different elements");
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    return vector<int>(intersection.begin(), intersection.end());
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    // ...
}