#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_negative_digit = false;
        while (num != 0) {
            int digit = abs(num % 10);
            if ((num > 0 && digit == 5 || digit == 8 || digit == 9)
                || (num < 0 && digit > 4)) {
                count++;
            } else if (digit > 0) {
                count += digit - 1;
            }
            num /= 10;
        }
    }
    return count;
}