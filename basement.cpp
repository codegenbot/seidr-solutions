#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    return result;