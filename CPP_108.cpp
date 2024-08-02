#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = std::abs(num) % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, -2, 3, -4};
    int result = count_nums(nums);
    std::cout << "The number of positive numbers is: " << result << std::endl;
    return 0;
}