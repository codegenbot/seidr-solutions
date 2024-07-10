#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_five_or_eight = false;
            std::string str = std::to_string(num);
            for (char c : str) {
                int digit = c - '0';
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                    break;
                }
            }
            if (!has_five_or_eight) {
                count++;
            }
        } else if (num < 0) {
            bool has_negative_digit = false, has_five_or_eight = false;
            std::string str = std::to_string(num);
            for (char c : str) {
                int digit = c - '0';
                if (digit >= 5) {
                    has_negative_digit = true;
                }
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                    break;
                }
            }
            if (!has_negative_digit || has_five_or_eight) {
                count++;
            }
        }
    }
    return count;