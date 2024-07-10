#include <iostream>
#include <vector>
#include <cassert>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; 
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (is_negative) {
                    if (num % 10 < 0) {
                        sum += num % 10;
                        is_negative = false;
                    } else {
                        break;
                    }
                } else {
                    sum += num % 10;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;

}

int main() {
    assert(count_nums({1}) == 1);
    std::vector<int> nums = {1, -2, 3, -4};
    int result = count_nums(nums);
    std::cout << "The number of positive sums is: " << result << std::endl;
    return 0;
}