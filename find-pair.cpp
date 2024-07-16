#include <vector>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    int i = 0;
    int j = nums.size() - 1;
    
    while (i < j) {
        int sum = nums[i] + nums[j];
        
        if (sum == target) {
            bool found = false;
            for (auto& pair : result) {
                if (pair.first == nums[i] && pair.second == nums[j]) {
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                int firstIndex = i;
                while (i < j && nums[i] == nums[i + 1]) {
                    i++;
                }
                result.push_back({nums[firstIndex], nums[j]});
                int lastIndex = j;
                while (i < j && nums[j] == nums[j - 1]) {
                    j--;
                }
            }
            
            i++;
            j--;
        } else if (sum < target) {
            i++;
        } else {
            while (i < j && nums[i] == nums[i + 1]) {
                i++;
            }
            j--;
        }
    }
    
    return result;
}