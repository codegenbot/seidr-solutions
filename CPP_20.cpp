#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;

    if (nums.size() < 2) {
        return result;
    }

    std::vector<float> sorted_nums = nums;
    std::sort(sorted_nums.begin(), sorted_nums.end());
    
    result.push_back(sorted_nums[0]);
    result.push_back(sorted_nums[1]);

    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a == b);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {1.1, 2.2});

    return 0;
}