```cpp
#include <vector>

int basement(std::vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i; 
    }
    return -1; 
}

int main() {
    std::vector<int> nums = {2,3,-2,4};
    int result = basement(nums);
    std::cout << "The basement index is: " << result << std::endl;
    return 0;
}