#include <iostream>
#include <vector>
#include <algorithm>

bool equal(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> filter_integers(std::vector<int>& vec) {
    std::vector<int> result;
    for (int i : vec) {
        if (std::isfinite(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}