```cpp
#include <iostream>
#include <vector>

int double_the_difference(const std::vector<int>& nums) {
    int oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * odd_sum;
}

int main() {
    std::vector<int> lst;
    int num, odd_sum = 0;
    while(std::cin >> num) {
        lst.push_back(num);
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }
    int result = double_the_difference(lst); 
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}