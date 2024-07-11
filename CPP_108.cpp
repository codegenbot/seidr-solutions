#include <vector>

int count_nums(const vector<int>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (num >= 0) {
            int sum = 0;
            do {
                sum += abs(num) % 10;
                num /= 10;
            } while (num);
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, sign = -1;
            do {
                sum += abs(num) % 10 * sign;
                num /= 10;
                sign = 1;
            } while (num);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}