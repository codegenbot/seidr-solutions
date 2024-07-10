```cpp
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
            count += !has_five_or_eight;
        } else if (num < 0) {
            bool has_negative_digit = false, has_five_or_eight = false;
            int abs_num = abs(num);
            while (abs_num != 0) {
                int digit = abs_num % 10;
                if (digit >= 5) {
                    has_negative_digit = true;
                }
                if (digit == 5 || digit == 8) {
                    has_five_or_eight = true;
                }
                abs_num /= 10;
            }
            count += !has_negative_digit && !has_five_or_eight;
        }
    }
    return count;