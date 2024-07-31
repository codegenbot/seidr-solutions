#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            bool has_negative = false;
            while (num > 0 || (!has_negative && num < 0)) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    count++;
                } else {
                    has_negative = !has_negative;
                }
                num /= 10;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> test = {1};
    assert(count_nums(test) == 1);
    return 0;
}