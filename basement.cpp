#include <vector>
#include <algorithm>

int basement(std::vector<int>& nums) {
    int minIndex = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2,-3,4};
    int result = basement(nums);
    return 0;
}