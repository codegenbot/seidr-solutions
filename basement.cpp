```c++
#include <vector>
#include <iostream>

int basementIndex(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; ++i) {
        if (i >= nums.size()) return -1; // Check if we've reached the end of the vector
        sum += nums[i];
        if (sum < 0) return i;
    }
}

int main() {
    std::vector<int> nums = {-5, 2, 4, -3};
    int result = basementIndex(nums);
    if (result == -1) std::cout << "No such index exists." << std::endl;
    else std::cout << "The basement index is: " << result << std::endl;
    return 0;
}