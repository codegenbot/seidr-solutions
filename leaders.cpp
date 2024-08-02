#include <iostream>
#include <vector>
#include <climits> // Include for INT_MIN

std::vector<int> findLeaders(const std::vector<int>& nums);

int main() {
    // Code remains the same as before
}

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    std::vector<int> reversedLeaders;
    for (int i = leaders.size() - 1; i >= 0; --i) {
        reversedLeaders.push_back(leaders[i]);
    }
    return reversedLeaders;
}