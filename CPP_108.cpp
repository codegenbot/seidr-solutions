#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit != 0) {
                has_positive_sum = true;
                break;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}