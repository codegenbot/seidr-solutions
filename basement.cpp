#include <vector>
#include <iostream>

int basementIndex(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; ++i) {
        if (i >= nums.size()) return -1;
        sum += nums[i];
        if (sum < 0) return i;
    }
}

int main() {
    std::vector<int> nums = {-1, -2, 3, 4};
    int result = basementIndex(nums);
    if (result == -1) std::cout << "No such index exists." << std::endl;
    else std::cout << "The basement index is: " << result << std::endl;
    return 0;
}