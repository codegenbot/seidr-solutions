#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        numIndex[nums[i]] = i;
    }

    return result;
}