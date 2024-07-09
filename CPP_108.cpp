#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            bool hasNonZeroDigit = false;
            num = -num;
            while (num > 0) {
                int digit = num % 10;
                if (digit != 0) {
                    hasNonZeroDigit = true;
                    break;
                }
                num /= 10;
            }
            if (hasNonZeroDigit)
                count++;
        }
    }
    return count;
}