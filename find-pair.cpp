#include <vector>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int j = i + 1;
        
        while (j < nums.size()) {
            if (nums[i] + nums[j] == target) {
                bool isPairUnique = true;

                for (auto& existingPair : result) {
                    if ((existingPair.first == nums[i] && existingPair.second == nums[j]) ||
                        (existingPair.first == nums[j] && existingPair.second == nums[i])) {
                        isPairUnique = false;
                        break;
                    }
                }

                if (isPairUnique) {
                    result.push_back({std::min(nums[i], nums[j]), std::max(nums[i], nums[j])});
                }
            } else if (nums[i] + nums[j] > target) {
                j = i; 
            } else {
                j++;
            }
        }
    }
    
    return result;
}