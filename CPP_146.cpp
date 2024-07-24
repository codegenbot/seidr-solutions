#include <iostream>
#include <vector>

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
    std::vector<int> nums = {1001, 1103, 1205, 1307, 2002, 2104, 2206};
    int result = specialFilter(nums);
    std::cout << "The number of integers in the array that satisfy the condition is: " << result << std::endl;
    return 0;
}