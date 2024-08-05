#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    int i = 1; // initialize i as 1
    for (i = 1; i <= nums.size(); ++i) {
        sum += nums[i - 1]; // access nums with i - 1
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