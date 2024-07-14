std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int left = i;
        int right = nums.size() - 1;

        while (left < right) {
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
    };
    
    return {-1, -1};
}