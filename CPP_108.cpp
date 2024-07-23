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
    std::vector<int> nums = {-5, -23, 45, 6};
    int result = count_nums(nums);
    std::cout << "Number of numbers with more than one digit: " << result << std::endl;
    return 0;
}