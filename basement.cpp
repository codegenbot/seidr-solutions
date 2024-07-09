#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i;
    }
    return -1;

}

int main() {
    std::vector<int> nums;
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(-2);
    nums.push_back(4);
    int result = basement(nums);
    if (result != -1)
        std::cout << "Basement index: " << result << std::endl;
    else
        std::cout << "No such index" << std::endl;
    return 0;
}