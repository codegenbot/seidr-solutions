#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = nums[0]; // update initialization here
    int i; // declare i here
    for (i = 1; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return i;
}

int main() {
    std::vector<int> nums = {2, -3, 8, -1, -5};
    int result = basement(nums);
    std::cout << result << std::endl;
    return 0;
}