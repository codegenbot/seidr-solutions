#include <vector>
int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0 || num < 0) {
            bool has_negative_digit = false;
            int sum_of_digits = 0;
            while (abs(num) != 0) {
                int digit = abs(num % 10);
                sum_of_digits += digit;
                num /= 10;
            }
            count++;
        } else if (num == 0) {
            bool has_negative_digit = false;
            int sum_of_digits = 0;
            while (abs(num) != 0) {
                int digit = abs(num % 10);
                sum_of_digits += digit;
                num /= 10;
            }
            count++;
        }
    }
    return count;
}

int main() { return 0; }