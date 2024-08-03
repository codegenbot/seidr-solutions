#include <iostream>
#include <vector>

int basementIndex(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-3,2,-2,4,-6};
    int result = basementIndex(nums);
    if(result == -1)
        std::cout << "No such index found.\n";
    else
        std::cout << "Basement index is: " << result << "\n";
    return 0;
}