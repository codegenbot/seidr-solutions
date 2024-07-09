#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;
};

int main() {
    std::vector<int> nums = {34,96,-94,-75,-27};
    int result = basement(nums);
    std::cout << "The Basement index is: " << result << std::endl;
    return 0;
}