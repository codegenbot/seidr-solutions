#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums;
    int n, cutIndex = 0;
    
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int minDiff = std::abs(nums[0] - nums[n-1]);
    for (int i = 1; i < n-1; i++) {
        if (std::abs(nums[i] - nums[i-1]) <= minDiff) {
            cutIndex = i;
            minDiff = std::abs(nums[i] - nums[i-1]);
        }
    }

    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}