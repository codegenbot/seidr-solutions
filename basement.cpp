#include <iostream>
#include <vector>

int basement(std::vector<int> nums);

int main() {
    std::vector<int> nums = {1, 2, 3, -5, 4};
    std::cout << basement(nums) << std::endl;
    return 0;
}

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}