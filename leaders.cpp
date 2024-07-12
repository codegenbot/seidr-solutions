#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    leaders.push_back(nums[n - 1]);
    return {leaders.rbegin(), leaders.rend()};
}