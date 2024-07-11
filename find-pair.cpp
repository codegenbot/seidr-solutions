#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    
    std::vector<int> result = findPair(nums, target);
    for (int num : result) {
        std::cout << num << std::endl;
    }
    
    return 0;
}