#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int rightmost = -1;
    std::vector<int> leaders;

    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            rightmost = nums[i];
            leaders.push_back(rightmost);
        }
    }

    return leaders;
}