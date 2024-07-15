#include <vector>

int basement(std::vector<int> nums) {
    long long sum = 0; // Updated data type to long long
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return nums.size();
}

int main() {
    std::vector<int> nums = {67, 37, -42, 81, 100, -68, -51, -94, -27, -96, 23, -90, -24, -83, -56, -68};
    int result = basement(nums);
    return result;
}