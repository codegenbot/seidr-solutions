#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num % 10) % 2 != 0 || (num / 10) % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, 11, -12, 13, -21};
    int result = specialFilter(nums);
    std::cout << "The number of special numbers in the given vector is: " << result << std::endl;
    return 0;
}