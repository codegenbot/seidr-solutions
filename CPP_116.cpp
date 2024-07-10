#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
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

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (__builtin_popcount(a) == __builtin_popcount(b)) {
            return a < b;
        }
        return __builtin_popcount(a) < __builtin_popcount(b);
    });
    return arr;
}