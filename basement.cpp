```cpp
#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) return j;
        }
    }
    return -1; // not found
}

int main() {
    std::vector<int> nums = {-5,1,-3,4,-2};
    int result = basement(nums);
    std::cout << "Basement index: " << result << std::endl;
    return 0;
}