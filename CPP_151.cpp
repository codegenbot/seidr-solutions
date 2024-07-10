```cpp
#include <iostream>
#include <vector>

long long double_the_difference(const std::vector<long long>& nums) {
    long long oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * oddSum;
}

int main() {
    std::vector<long long> lst;
    long long num1, num2, num3; 
    cin >> num1 >> num2 >> num3;
    lst.push_back(num1);
    lst.push_back(num2);
    lst.push_back(num3); 
    long long result = double_the_difference(lst);
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    return 0;
}