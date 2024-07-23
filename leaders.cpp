#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    if (n == 0) {
        return leaders;
    }
    
    int maxRight = nums[n - 1];
    leaders.push_back(nums[n - 1]); // Rightmost element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    // Your input vector initialization here, e.g., std::vector<int> nums = {...};
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}