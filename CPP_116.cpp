#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
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