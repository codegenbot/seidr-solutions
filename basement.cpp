#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i; // return i instead of i + 1
        }
    }
    return nums.size();
}