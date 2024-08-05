#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return nums.size();
}

int main() {
    std::vector<int> nums = {0, 80, -22, -86};
    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}