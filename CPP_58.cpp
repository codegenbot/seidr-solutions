#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> common(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> result;
    for (int i : v1) {
        for (int j : v2) {
            if (i == j) {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}

static_assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
static_assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
static_assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));