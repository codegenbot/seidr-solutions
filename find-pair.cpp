#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    std::vector<std::pair<int, int>> pairs;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pairs.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    
    return pairs;
}

int main() {
    std::vector<int> nums = {-7846, 5139, 6300, 281, -842, -9075, -7785, 6034};
    int target = 5420; 
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    for (const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}