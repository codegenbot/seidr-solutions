#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        int runningSum = 0;
        for (int j = 0; j <= i; j++) {
            runningSum += nums[j];
            if (runningSum < 0)
                return j + 1;
        }
    }
    return -1;
};

int main() {
    std::vector<int> nums = {34,96,-94,-75,-27};
    int result = basement(nums);
    std::cout << "The Basement index is: " << result << std::endl;
    return 0;
}