#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        sum += std::floor(nums[i] / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}