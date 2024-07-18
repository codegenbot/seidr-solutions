#include <vector>
#include <cmath>

int specialFilter(const std::vector<int>& nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && (std::abs(num) % 10 % 2 != 0) && (std::to_string(std::abs(num))[0] % 2 != 0)) {
            count++;
        }
    }
    return count;
}