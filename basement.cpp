#include <iostream>
#include <vector>

int basement(std::vector<int> nums);

int main() {
    std::vector<int> nums = {2, -3, 1, -5};
    std::cout << basement(nums) << std::endl;
    return 0;
}

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum <= 0) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}