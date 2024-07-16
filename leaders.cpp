#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] > nums[i+1]) {  
            leaders.push_back(nums[i]);
        }
    }
    
    leaders.push_back(nums[nums.size()-1]);
    
    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}