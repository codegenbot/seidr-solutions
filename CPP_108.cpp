```cpp
#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool has_negative = false;
            while (num > 0 || (!has_negative && num < 0)) {
                int digit = abs(num) % 10;
                if (digit != 0) {
                    sum += digit;
                } else {
                    has_negative = !has_negative;
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
    std::cout << count_nums({1}) << std::endl;
    return 0;
}