#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> removeDuplicates(const std::vector<int>& nums) {
    std::vector<int> uniqueNums = nums;
    std::sort(uniqueNums.begin(), uniqueNums.end());
    uniqueNums.erase(std::unique(uniqueNums.begin(), uniqueNums.end()), uniqueNums.end());
    return uniqueNums;
}

int main() {
    assert(issame(removeDuplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
}