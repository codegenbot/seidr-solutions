```cpp
#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > 0) { 
            sum = 0;
        }
        else if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-5,1,-3,4,-2};
    int result = basement(nums);
    std::cout << "Basement index: " << result << std::endl;
    return 0;
}