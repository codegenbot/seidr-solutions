```c++
#include <vector>
#include <initializer_list>

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
    std::vector<int> nums = {-3, 2, 5, -4};
    int result = basement(nums);
    if (result != -1) {
        std::cout << "Basement found at index: " << result << std::endl;
    } else {
        std::cout << "No basement found" << std::endl;
    }
    return 0; 
}