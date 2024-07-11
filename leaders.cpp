#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> leaders;
    if (n == 0) return leaders;

    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> leaders = leaders(nums);
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    return 0;
}