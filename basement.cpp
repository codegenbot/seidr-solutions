#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    int i;
    for (i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return i;
}

int main() {
    std::vector<int> nums = {0, 80, -22, -86};
    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}