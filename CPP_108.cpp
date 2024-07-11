#include <vector>
#include <assert.h>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            has_positive_sum_of_digits = sum > 0;
        } else {
            int sum = 0, sign = -1;
            while (num < 0) {
                int digit = (num % 10) * sign;
                if (digit < 0) {
                    sign = -sign;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            has_positive_sum_of_digits = sum > 0;
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}