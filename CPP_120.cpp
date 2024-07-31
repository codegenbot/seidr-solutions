#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> sortedArr(arr);
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<int>());
    return std::vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 2), {243, 3});

    return 0;
}