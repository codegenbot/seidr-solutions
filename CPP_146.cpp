#include <vector>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main2() {
    std::vector<int> nums = {1, 11, 21};
    int output = specialFilter(nums);
    return output;
}