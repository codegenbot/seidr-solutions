#include <vector>
#include <unordered_map>

std::vector<std::pair<int, int>> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {{complement, nums[i]}};
        }
        numMap[nums[i]] = i;
    }
    
    return {{-1, -1}}; 
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    // process the result
    for (const auto& pair : result) {
        if (pair.first != -1 && pair.second != -1) {
            std::cout << "The two elements that sum to " << target << " are " << pair.first << " and " << pair.second << ".\n";
        } else {
            std::cout << "No such pair found.\n";
        }
    }
    return 0;
}