#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 10, -4, -9, 5, 9};
    int result = basement(nums);
    std::cout << "The first index where the sum is negative is: " << result << std::endl;
    return 0;
}