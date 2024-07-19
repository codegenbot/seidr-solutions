#include <iostream>
#include <vector>
#include <algorithm>
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

std::vector<int> sort_third(std::vector<int> vec) {
    if (vec.size() < 3) return vec;

    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a < b;
    });

    return vec;
}