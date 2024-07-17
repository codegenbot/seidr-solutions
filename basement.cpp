#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = 0, index = -1;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
            index = i;
        }
    }
    return index + 1;
}

int main() {
    std::vector<int> nums = {2, -3, 8, -1, -2, 4, -2};
    std::cout << basement(nums) << std::endl;
    return 0;
}