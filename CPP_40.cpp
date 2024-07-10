#include <vector>
#include <algorithm>

bool triples_sum_to_zero(const std::vector<int>& nums) {
    if (nums.size() < 3) {
        return false;
    }
    
    std::vector<int> sorted_nums(nums);
    std::sort(sorted_nums.begin(), sorted_nums.end());
    
    for (int i = 0; i < sorted_nums.size(); ++i) {
        int left = i + 1;
        int right = sorted_nums.size() - 1;
        
        while (left < right) {
            if (left > i + 1 && sorted_nums[left] == sorted_nums[left - 1]) {
                ++left;
                continue;
            }
            if (right < sorted_nums.size() - 1 && sorted_nums[right] == sorted_nums[right + 1]) {
                --right;
                continue;
            }
            
            int sum = sorted_nums[i] + sorted_nums[left] + sorted_nums[right];
            
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return false;
}