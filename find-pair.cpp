#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.count(complement)) {
            result.push_back({complement, nums[i]});
        }
        map[nums[i]] = i;
    }
    
    return result;
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