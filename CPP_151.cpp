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
    long long num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    std::vector<long long> lst = {num1, num2, num3};
    long long odd_sum;
    odd_sum = doubleTheDifference(lst);
    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}