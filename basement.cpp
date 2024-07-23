```cpp
#include <vector>
#include <cstddef>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    int minIndex = -1; 
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1)
            minIndex = i;
        else if (sum >= 0 && minIndex != -1)  
            return minIndex + 1; 
    }
    return -1; 
}

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    std::cout << "The first index where the sum of all integers from the start of the vector to that index (inclusive) is negative is: " << result << std::endl;
    return 0;
}