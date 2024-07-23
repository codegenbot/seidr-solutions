#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> nums;

int main() {
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += std::max(0, num / 3 - 2);
    }

    std::cout << sum << std::endl;

    return 0;
}