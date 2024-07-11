#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = leaders(nums);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> leaders;
    leaders.push_back(nums[n - 1]);
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= nums[i + 1]) {
            leaders.push_back(nums[i]);
        }
    }
    return leaders;
}