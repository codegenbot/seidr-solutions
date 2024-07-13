```cpp
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
    std::cout << "The pair of numbers that sum to the target is: ";
    for (auto& pair : findPair(nums, target)) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
    return 0;
}