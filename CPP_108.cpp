#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (sign || digit > 0) {
                    sum += digit;
                }
                num /= 10;
                sign = !sign;
            }
            if (sum > 0) {
                count++;
            }
        } else if (num < 0) {
            int sum = 0;
            bool sign = true;
            do {
                int digit = -abs(num) % 10;
                if (!sign || digit > 0) {
                    sum += digit;
                }
                num /= 10;
                sign = !sign;
            } while (num != 0);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}