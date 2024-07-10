#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    int result = double_the_difference(lst);
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
    return 0;
}

int double_the_difference(const std::vector<int>& nums) {
    int oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * oddSum;
}