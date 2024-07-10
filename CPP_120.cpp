#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> topKElements(const std::vector<int>& arr, int k) {
    if (k == 0) return {};
    std::vector<int> sortedArr = arr;
    std::partial_sort(sortedArr.begin(), sortedArr.begin() + k, sortedArr.end(), std::greater<int>());
    return std::vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}

int main() {
    assert(issame(topKElements({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(topKElements({1, 2, 3, -23, 243, -400, 0}, 3), {243, 3, 2}));
    return 0;
}