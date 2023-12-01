#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string int_to_mini_roman(int number){
    std::vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    std::string result = "";

    for (int i = 0; i < nums.size(); i++) {
        while (number >= nums[i]) {
            result += romans[i];
            number -= nums[i];
        }
    }

    return result;
}