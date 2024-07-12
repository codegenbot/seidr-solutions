#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (sum + nums[i] < 0) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}

int main() {
    std::vector<int> nums = {3, -83, 4, -56};
    int result = basement(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}