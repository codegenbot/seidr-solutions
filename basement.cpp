```cpp
#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        sum += *it;
        if (sum < 0)
            return std::distance(nums.begin(), it);
    }
    return -1;

}

int main() {
    std::vector<int> nums({-2,1,-3,4,-1,2,1,-5,4});
    int result = basement(nums);
    std::cout << "Result: " << result << std::endl;
    return 0; }