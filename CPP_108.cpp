#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) continue; // skip negative numbers and zero
        int sign = 1;
        if (num < 0) { sign = -1; num = -num; }
        int sum_digits = 0;
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        }
        sum_digits *= sign;
        if (sum_digits > 0) count++;
    }
    return count;
}