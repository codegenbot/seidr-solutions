#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int prev = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= prev) {
            return i;
        }
        prev = nums[i];
    }
    return -1;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int result = basement(nums);
    std::cout << "First negative index: " << result << std::endl;
    return 0;
}