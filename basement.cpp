#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {62, -14, -65};

    int result = basement(nums);

    std::cout << "First index where sum is negative: " << result << std::endl;

    return 0;
}