#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> topKElements(const std::vector<int>& arr, int k) {
    if (k == 0) return {};
    std::vector<int> sortedArr = arr;
    std::partial_sort(sortedArr.begin(), std::max_element(sortedArr.begin(), sortedArr.end()), sortedArr.end(), std::greater<int>());
    return std::vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}

assert(issame(topKElements({1, 2, 3, -23, 243, -400, 0}, 0), {}));