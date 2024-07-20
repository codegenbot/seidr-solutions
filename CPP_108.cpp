#include <vector>

int count_nums(const vector<int>& n) {
    int count = 0;
    for (const auto& num : n) {
        if (num >= 0) {
            int sum = 0;
            bool is_negative = false;
            while (num > 0 || (!is_negative && num < 0)) {
                int digit = abs(num) % 10;
                sum += digit;
                is_negative = (num < 0);
                num /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}