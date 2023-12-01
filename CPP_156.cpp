#include <string>
#include <vector>

std::string int_to_mini_romank(int number) {
    std::vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    std::string result = "";
    int i = 0;

    while (number > 0) {
        while (number >= nums[i]) {
            result += romans[i];
            number -= nums[i];
        }
        i++;
    }

    return result;
}