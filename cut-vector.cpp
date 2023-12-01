#include <vector>

std::vector<int> cutVector(std::vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    int diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++) {
            left_sum += nums[j];
        }
        
        for (int k = i + 1; k < n; k++) {
            right_sum += nums[k];
        }
        
        int current_diff = abs(left_sum - right_sum);
        
        if (current_diff < diff) {
            index = i;
            diff = current_diff;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subvector2(nums.begin() + index + 1, nums.end());
    
    return {subvector1, subvector2};
}