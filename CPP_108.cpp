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
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
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
    int result = count_nums(nums);
    std::cout << "The number of integers is: " << result << std::endl;
    return 0;
}