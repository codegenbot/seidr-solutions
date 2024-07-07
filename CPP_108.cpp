#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool sum_greater_than_zero = false;
        if (num >= 0) {
            long temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                if (digit > 0) {
                    sum_greater_than_zero = true;
                    break;
                }
                temp /= 10;
            }
        } else {
            temp = -num;
            while (temp != 0) {
                int digit = temp % 10;
                if (digit < 0) {
                    sum_greater_than_zero = true;
                    break;
                }
                temp /= 10;
            }
        }
        if (sum_greater_than_zero) {
            count++;
        }
    }
    return count;
}