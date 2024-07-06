#include <vector>

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 0) {
            int sum = 0;
            bool negative = false;
            do {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0)
                    continue;
                sum += digit < 5 ? -1 * (digit > 4 ? digit - 9 : digit) : digit;
                num /= 10;
                if (num == 0 && !negative)
                    break;
            } while (true);
            if (sum > 0)
                count++;
        }
    }
    return count;