#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> leaders(const std::vector<int>& nums) {
        std::vector<int> result;
        int maxRight = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] >= maxRight) {
                result.push_back(nums[i]);
                maxRight = nums[i];
            }
        }

        std::reverse(result.begin(), result.end());
        return result;
    }

    // Example usage
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = leaders(nums);

    for (const int& leader : result) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;

    return 0;
}