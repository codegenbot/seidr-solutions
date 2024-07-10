#include <vector>
#include <string>
#include <cmath>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10) {
            std::string numStr = std::to_string(std::abs(num));
            int frontDigit = numStr.front() - '0';
            int backDigit = numStr.back() - '0';
            if (frontDigit % 2 != 0 && backDigit % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}