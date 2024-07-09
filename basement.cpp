#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < std::vector<int>(nums).size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = basement(nums);
    std::cout << "The first index at which the sum becomes negative is: " << result << std::endl;
    return 0;
}