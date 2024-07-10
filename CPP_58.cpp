#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> common(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> result;
    for (int i : v1) {
        if (std::find(v2.begin(), v2.end(), i) != v2.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
    assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));

    return 0;
}