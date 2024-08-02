#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.rbegin(), arr.rend());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}