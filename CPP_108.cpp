#include <vector>
#include <algorithm>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            bool has_negative_digit = false;
            int sum_of_digits = 0;
            while (num != 0) {
                int digit = abs(num % 10);
                if (digit == 5 || digit == 8 || digit == 9) {
                    sum_of_digits += digit - 5;
                } else {
                    sum_of_digits += digit;
                }
                num /= 10;
            }
        } else if (num < 0) {
            int sum_of_digits = 0;
            while (abs(num) != 0) {
                int digit = abs(num % 10);
                sum_of_digits += digit;
                num /= 10;
            }
        } else {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {1, 2, -3, 0};
    int result = count_nums(numbers);
    std::cout << "Number of valid numbers: " << result << std::endl;
    return 0;
}