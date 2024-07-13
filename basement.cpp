#include <vector>
#include <iostream>

int basement(std::vector<int>& nums) {
    int sum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) 
            return i + 1;
    }
    return -1; // return -1 if no such index exists
}

int main() {
    std::vector<int> nums = {-1,-2,-3,-4,-5};
    int result = basement(nums);
    if(result == -1) {
        std::cout << "No such index exists." << std::endl;
    } else {
        std::cout << "The first index where the sum is negative is: " << result << std::endl;
    }
    return 0;
}