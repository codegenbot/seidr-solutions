#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;

    int n = nums.size();
    leaders.push_back(nums[n - 1]);

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
        }
    }
    
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