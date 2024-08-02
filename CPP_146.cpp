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
    std::vector<int> nums = {1, 11, 121, 1001};
    int result = specialFilter(nums);
    std::cout << "Number of elements in the vector that meet the condition: " << result << std::endl;
    return 0;
}