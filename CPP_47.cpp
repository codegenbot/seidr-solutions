#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

double median(const std::vector<int>& nums) {
    std::vector<int> vec(nums);
    std::sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 1)
        return static_cast<double>(vec[vec.size()/2]);
    else
        return static_cast<double>(vec[vec.size()/2 - 1] + vec[vec.size()/2]) / 2.0;
}

int main() {
    assert(std::abs(median({8, 1, 3, 9, 9, 2, 7}) - 5) < 1e-4);
    return 0;
}