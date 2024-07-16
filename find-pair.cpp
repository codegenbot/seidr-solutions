#include <vector>
#include <algorithm>

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
                result.push_back({nums[i], nums[j]});
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

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    // print or use result as needed
    return 0;
}