#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return nums.size() + 1;
}

int main() {
    std::vector<int> nums = {3, -2, 1, -1};
    int result = basement(nums);
    return result;
}