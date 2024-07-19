#include <iostream>
#include <vector>

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
            num = -num; // convert to positive
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (is_negative) {
                    sum -= num % 10;
                } else {
                    sum += num % 10;
                }
                num /= 10;
                is_negative = !is_negative; // toggle sign
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;

}

int main() {
    std::vector<int> test_nums = {1};
    int result = count_nums(test_nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}