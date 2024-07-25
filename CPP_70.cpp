#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> strange_sort_list(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums;
    std::sort(sorted_nums.begin(), sorted_nums.end());
    return sorted_nums;
}

int main() {
    assert(issame(strange_sort_list({5, 3, 7, 1}), std::vector<int>({1, 3, 5, 7})));
    assert(issame(strange_sort_list({111111}), std::vector<int>({111111}));
    return 0;
}