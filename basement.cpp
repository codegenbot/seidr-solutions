#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (unsigned long i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2, 3, -2, 4, -3, 5, -1};
    int result = basement(nums);
    return 0;
}