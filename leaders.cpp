#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    leaders.push_back(nums[n - 1]);  
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> input = {12, 9, 7, 14, 8, 6};
    std::vector<int> result = findLeaders(input);
    for (int val : result) {
        std::cout << val << " ";
    }
    return 0;
}