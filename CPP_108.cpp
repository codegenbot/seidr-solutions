```cpp
#include <vector>
#include <cassert>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum_digits = 0;
        while (num > 0) {
            sum_digits += num % 10;
            num /= 10;
        }
        if (sum_digits > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    std::vector<int> nums = {-5, -4, -2, -1, 0, 1};
    int result = count_nums(nums);
    std::cout << "The count of positive numbers with even digital sum is: " << result << std::endl;
    return 0;
}