#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::vector<int>(a) == std::vector<int>(b);
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> result;
    for (size_t i = 0; i <= arr.size() - k; ++i) {
        int max_val = *std::max_element(arr.begin() + i, arr.begin() + i + k);
        result.push_back(max_val);
    }
    return result;
}

assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {3, 243, 243, 243, 0}));