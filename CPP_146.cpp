#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {100, 101, 102, 103, 104};
    int result = specialFilter(nums);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}