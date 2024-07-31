#include <vector>
#include <string>
#include <cassert>
#include <cstdlib>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10 && (std::abs(num) % 10 % 2 == 1) && (std::to_string(std::abs(num))[0] - '0') % 2 == 1) {
            count++;
        }
    }
    return count;
}