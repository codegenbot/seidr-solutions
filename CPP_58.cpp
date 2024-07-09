#include <vector>
#include <set>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());
    std::vector<int> intersection;
    std::set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(),
        inserter(intersection, intersection.begin()));
    return intersection;
}

int main() {
    assert(isSame(common({4, 3, 2, 8}, {}), {}));
    // ...
}