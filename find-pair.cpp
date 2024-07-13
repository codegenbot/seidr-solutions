#include <vector>
#include <algorithm>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int left = i;
        int right = nums.size() - 1;
        
        while(left < right) {
            int sum = nums[left] + nums[right];
            
            if(sum == target) {
                return {nums[left], nums[right]};
            }
            
            else if(sum < target) {
                left++;
            }
            
            else {
                right--;
            }
        }
    }
    
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    if(result.first != -1 && result.second != -1) {
        std::cout << "The pair of numbers that sum to the target is: (" << result.first << ", " << result.second << ")";
    } else {
        std::cout << "No such pair found.";
    }
    return 0;
}