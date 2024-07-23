#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {-1,2,3,-2,5};
    return basement(nums);
}