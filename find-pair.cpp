#include <vector>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int> nums, int target) {
    std::unordered_map<int, int> numMap;
    for (size_t i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {4102, 9455, 8230, -5992, -8680, 8321, -1380, -2472, 5688, -3852};
    int target = 9;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first != -1 && result.second != -1) {
        std::cout << "The two elements that sum to the target are: " << result.first << ", " << result.second << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
    return 0;
}