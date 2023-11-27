#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            right_sum += nums[j];
        }
        
        int curr_diff = abs(left_sum - right_sum);
        
        if (curr_diff < diff) {
            diff = curr_diff;
            index = i;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + index);
    std::vector<int> right(nums.begin() + index, nums.end());
    
    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}