#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int size;
    std::cin >> size;

    std::vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }

    int sum = 0;
    for (int num : nums) {
        sum += std::max(0, num / 3 - 2);
    }

    std::cout << sum << std::endl;

    return 0;
}