#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

std::vector<int> common(const std::vector<int>& v1, const std::vector<int>& v2) {
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

int main() {
    assert(std::issame(std::common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
    assert(std::issame(std::common({1, 2, 3}, {4, 5, 6}), {}));
    assert(std::issame(std::common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));

    return 0;
}