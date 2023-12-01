#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        std::string num_str = std::to_string(num);
        int first_digit = num_str[0] - '0';
        int last_digit = num_str[num_str.length() - 1] - '0';
        if (num > 10 && first_digit % 2 != 0 && last_digit % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({11, 22, 33}) == 0);
    assert(specialFilter({10, 20, 30, 40}) == 0);
    assert(specialFilter({11, 21, 31, 41, 50, 61}) == 2);
    // Add more test cases if needed
    return 0;
}