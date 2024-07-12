#include <vector>
#include <map>
#include <iostream>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        if (numIndex.find(target - nums[i]) != numIndex.end()) {
            return {nums[i], target - nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = findPair(nums, target);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}