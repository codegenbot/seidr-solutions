#include <vector>
#include <utility>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(*numMap[complement], nums[i]);
        }
        numMap[nums[i]] = &nums[i];
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {5, -2797, -3288, 50, -170, -8973};
    int target = 2967;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first != -1) {
        std::cout << "The pair is (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No pair found with sum " << target << "." << std::endl;
    }
}