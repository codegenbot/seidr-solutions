#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
        }
    }
    leaders.pop_back(); // Remove duplicate of rightmost element

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