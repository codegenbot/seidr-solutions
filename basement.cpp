#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i+1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 10, -4, -9, 5, 1, 2, -5, 100};
    int result = basement(nums);
    std::cout << "Basement index: " << result << std::endl;
    return 0;
}