#include <iostream>
#include <vector>

int double_the_difference(const std::vector<int>& nums) {
    int oddSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            oddSum += nums[i];
        }
    }
    return oddSum * oddSum;
}

int main() {
    std::vector<int> lst;
    int num;
    int odd_sum = 0; 
    while(std::cin >> num) {
        lst.push_back(num);
    }
    for(int i : lst) {
        if(i % 2 != 0) {
            odd_sum += i * i;
        }
    }
    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}