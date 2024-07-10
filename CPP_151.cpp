#include <iostream>
#include <vector>

int doubleTheDifference(const std::vector<int>& nums) {
    int oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * oddSum;
}

int main() {
    std::vector<int> lst = {1, 3, 4}; 
    int result = doubleTheDifference(lst);
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    return 0;
}