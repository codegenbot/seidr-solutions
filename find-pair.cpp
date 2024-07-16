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
            result.push_back({nums[i], nums[j]});
            i++;
            j--;
        } else if (sum < target) {
            i++;
        } else {
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