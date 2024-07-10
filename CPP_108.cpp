#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_negative_digit = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    count++;
                } else if (digit > 1) {
                    count += digit - 1;
                }
                num /= 10;
            }
        } else if (num < 0) {
            bool has_negative_digit = false;
            while (abs(num) != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    count++;
                } else if (digit > 4) {
                    count += digit - 5;
                }
                num /= 10;
            }
        }
    }
    return count;