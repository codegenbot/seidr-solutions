#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    
    return result;
}

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

int main() {
    assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
    assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));

    return 0;
}