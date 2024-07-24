#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }
    
    if (std::cin.fail() && !std::cin.eof()) {
        std::cin.clear();
        std::string dummy;
        std::cin >> dummy;
    }

    int sum = 0;
    for (int num : nums) {
        sum += std::max(0, num / 3 - 2);
    }

    std::cout << sum << std::endl;

    return 0;
}