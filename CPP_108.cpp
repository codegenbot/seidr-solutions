#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum_of_digits = false;
        long absNum = labs(num);
        while (absNum > 0) {
            int digit = absNum % 10;
            if (digit != 0 || num < 0) {
                has_positive_sum_of_digits = true;
                break;
            }
            absNum /= 10;
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}