#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {{complement, nums[i]}};
        }
        numMap[nums[i]] = i;
    }
    
    return {};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7; 
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    for (const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}