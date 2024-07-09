#include <utility>

pair<int, int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int sum = nums[left] + nums[right];
            
            if (sum == target) {
                return {nums[left], nums[right]};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    
    return {-1, -1};
}