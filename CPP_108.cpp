#include <vector>
#include <algorithm>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_five_or_eight = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                }
                num /= 10;
            }
            if (!has_five_or_eight) {
                count++;
            }
        } else if (num < 0) {
            bool has_negative_digit = false, has_five_or_eight = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                }
                num /= 10;
                if (!has_negative_digit && digit >= 5) {
                    has_negative_digit = true;
                }
            }
            if (!has_negative_digit || has_five_or_eight) {
                count++;
            }
        }
    }
    return count;
}