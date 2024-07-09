#include <vector>
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (sign) {
                    if (digit > 0) {
                        sum += digit;
                    }
                } else {
                    if (digit < 0) {
                        sign = true;
                        if (digit == -1) {
                            sum -= 1;
                        } else {
                            sum -= digit;
                        }
                    } else {
                        sum += digit;
                    }
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}