#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum < 0) {
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