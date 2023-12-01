#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        std::string numStr = std::to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.length() - 1] - '0';
        if (num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);                  // Empty vector
    assert(specialFilter({1, 2, 3, 4, 5}) == 0);     // No numbers matching the condition
    assert(specialFilter({1, 2, 3, 4, 55}) == 0);    // No numbers matching the condition
    assert(specialFilter({1, 2, 3, 4, 15}) == 1);    // One number matching the condition
    assert(specialFilter({11, 22, 33, 44, 55}) == 0); // No numbers matching the condition
    return 0;
}