#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2,3,-2,4};
    int result = basement(nums);
    if(result == -1) {
        std::cout << "No such index found." << std::endl;
    } else {
        std::cout << "The first index is: " << result << std::endl;
    }
    return 0;