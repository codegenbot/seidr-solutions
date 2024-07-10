```cpp
#include <iostream>
#include <vector>

long long doubleTheDifference(const std::vector<long long>& nums) {
    long long oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * oddSum;
}

int main() {
    std::vector<long long> lst = {1, 3, 4}; 
    long long result = doubleTheDifference(lst);
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    return 0;
}