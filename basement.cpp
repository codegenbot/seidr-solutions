#include <vector>
#include <cstddef>
#include <initializer_list>

int main() {
    std::vector<int> nums = {-1,-2,3,4,-5};
    int result = basement(nums);
    return 0;
}

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