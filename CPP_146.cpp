#include <vector>
#include <cmath>

int specialFilter(const std::vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (std::abs(num) / 10) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {};
    assert(specialFilter(nums) == 0);
    return 0;
}