#include <iostream>
#include <algorithm>
#include <vector>

bool isSameVector(const std::vector<float>& a, const std::vector<float>& b) {
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

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto even = std::vector<float>(l.begin(), l.end());
            std::sort(even.begin(), even.end());
            result.push_back(even[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(isSameVector(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}