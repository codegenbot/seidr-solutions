#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, bool> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        
        numMap[nums[i]] = true;
    };

    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 3, 2, 4};
    int target = 5;
    std::pair<int, int> result = findPair(nums, target);
    if(result.first != -1 && result.second != -1)
        std::cout << "The pair is: " << result.first << ", " << result.second << std::endl;
    else
        std::cout << "No pair found" << std::endl;
    return 0;
}