#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, cutIndex;
    std::cin >> n >> cutIndex;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    int leftIndex = 0;
    for (int i = 0; i < cutIndex; ++i) {
        if (abs(nums[cutIndex] - nums[i]) < diff) {
            diff = abs(nums[cutIndex] - nums[i]);
            leftIndex = i;
        }
    }
    
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + leftIndex + 1);
    std::vector<int> rightSubvector(nums.begin() + leftIndex + 1, nums.end());
    
    for (int i : leftSubvector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (int i : rightSubvector) {
        if (i == nums[cutIndex]) {
            std::cout << std::endl;
        }
        std::cout << i << " ";
    }

    return 0;
}