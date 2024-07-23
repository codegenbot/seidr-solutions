#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    size_t i = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0) return i;
        i++;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {-1,2,3,-2,5};
    int result = basement(nums);
    return result;
}