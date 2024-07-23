#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
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
    if (result.size() == 2) {
        std::cout << result[0] << std::endl;
        std::cout << result[1] << std::endl;
    }
    
    return 0;
}