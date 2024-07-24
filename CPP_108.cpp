#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum_digits = 0;
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, -2, 3, 4};
    int result = count_nums(nums);
    std::cout << "The number of positive numbers is: " << result << std::endl;
    return 0;
}