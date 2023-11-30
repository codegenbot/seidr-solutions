#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;

    for (int num : nums) {
        std::string str = std::to_string(std::abs(num));

        if (str[0] % 2 != 0 && str[str.size() - 1] % 2 != 0 && num > 10) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> nums = { 1, 23, -45, 678, -91011 };
    int result = specialFilter(nums);
    std::cout << "Count: " << result << std::endl;

    return 0;
}