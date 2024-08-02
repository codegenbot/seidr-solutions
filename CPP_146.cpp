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
    std::vector<int> nums = {11, 13, 15};
    int result = specialFilter(nums);
    std::cout << "The number of integers in the vector that meet the condition is: " << result << std::endl;
    return 0;
}