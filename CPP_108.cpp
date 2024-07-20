#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = abs(num);
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            count++;
        } else {
            int sum = 0, sign = -1; // Changed this line
            int abs_num = abs(num);
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1};
    assert(count_nums(nums) == 1);
    return 0;
}