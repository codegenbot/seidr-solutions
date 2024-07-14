#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == complement) {
                return {nums[i], nums[j]};
            }
            else if (nums[j] > complement) {
                break;
            }
        }
    };
    
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 15;
    std::pair<int, int> pair = findPair(nums, target);
    return 0;
}