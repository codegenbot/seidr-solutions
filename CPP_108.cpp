#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum_digits = 0;
            while (num > 0) {
                sum_digits += num % 10;
                num /= 10;
            }
            if (sum_digits > 0) count++;
        } else {
            num = -num; // convert to positive
            int sum_digits = 0;
            bool has_negative_digit = false;
            while (num > 0) {
                int digit = num % 10;
                if (digit < 0) {
                    has_negative_digit = true;
                    digit = -digit;
                }
                sum_digits += digit;
                num /= 10;
            }
            if (has_negative_digit || sum_digits > 0) count++;
        }
    }
    return count;
}