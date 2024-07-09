#include <iostream>
#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    int n; 
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n; 
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> nums[i];
    }
    int result = specialFilter(nums);
    std::cout << "The number of integers satisfying the condition is: " << result << std::endl;
    return 0;
}