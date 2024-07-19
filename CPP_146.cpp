```cpp
#include <vector>
#include <cassert>
#include <cmath>
#include <iostream>

int main() {
    int count = 0;
    std::vector<int> nums;

    for (int i = 0; i < 5; ++i) {
        int num;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }

    count = specialFilter(nums);

    return 0;
}

int specialFilter(std::vector<int> nums) {
    { // Add {}
    int c = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            c++;
        }
    }
    return c; // Remove {}
}