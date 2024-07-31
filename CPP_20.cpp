#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    std::vector<float> result;

    if (nums.size() < 2) {
        return result;
    }

    std::sort(nums.begin(), nums.end());
    result.push_back(nums[0]);
    result.push_back(nums[1]);

    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    if (!issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<float>{1.1, 2.2})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }

    return 0;
}