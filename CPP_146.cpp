#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / abs(num)) % 10 % 2 != 0 || (abs(num) % 10) % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {100, -20, 30, 50, -70};
    int result = specialFilter(nums);
    std::cout << "The number of numbers that meet the condition is: " << result << std::endl;
    return 0;
}