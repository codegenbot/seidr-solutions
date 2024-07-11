#include <vector>
#include <algorithm>

int count_nums(const vector<int>& n) {
    int count = 0;
    for (const auto& num : n) {
        int sum = 0;
        bool sign = true;
        if (num < 0) {
            sign = false;
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        if ((sign && sum > 0) || (!sign && sum > 0)) {
            count++;
        }
    }
    return count;
}