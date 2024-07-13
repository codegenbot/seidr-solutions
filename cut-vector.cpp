#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int cutIndex = n / 2;
    int minDiff = abs(nums[cutIndex] - nums[cutIndex + 1]);

    for(int i = 1; i < n - 1; i++) {
        if(abs(nums[i] - nums[i + 1]) < minDiff) {
            cutIndex = i;
            minDiff = abs(nums[i] - nums[i + 1]);
        }
    }

    for(int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    for(int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}