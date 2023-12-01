#include <string>
#include <vector>

std::string int_to_mini_roman(int number) {
    std::vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> romans = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    std::string result = "";

    for (int i = 0; i < nums.size(); i++) {
        while (number >= nums[i]) {
            result += romans[i];
            number -= nums[i];
        }
    }

    return result;
}