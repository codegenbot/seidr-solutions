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

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> nums = {111, 120, 121, 130, 131};
    int result = specialFilter(nums);
    std::cout << "The number of integers in the vector that meet the conditions is: " << result << std::endl;
    return 0;
}