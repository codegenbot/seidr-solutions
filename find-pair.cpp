```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return {nums[left], nums[right]};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return {};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<int> result = findPair(nums, target);
    if (!result.empty()) {
        for (int num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "No pair found" << std::endl;
    }
}```