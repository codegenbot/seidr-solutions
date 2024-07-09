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
    assert(specialFilter({}) == 0);
    // Your code here
    std::vector<int> nums = {11, 12, 13, 14, 15};
    std::cout << "Count: " << specialFilter(nums) << std::endl;
    return 0;
}