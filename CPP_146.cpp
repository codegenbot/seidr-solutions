#include <vector>
#include <string>
#include <cassert>
#include <cmath>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string numStr = std::to_string(std::abs(num));
            int firstDigit = numStr.front() - '0'; // Convert first character to integer
            int lastDigit = numStr.back() - '0'; // Convert last character to integer
            if (firstDigit % 2 != 0 && lastDigit % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}