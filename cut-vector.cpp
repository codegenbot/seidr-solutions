#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int sumLeft = 0, sumRight = totalSum;
    int halfSum = totalSum / 2;
    int prefixSum = 0;
    int cutIndex;

    for (cutIndex = 0; cutIndex < n; ++cutIndex) {
        prefixSum += nums[cutIndex];
        sumLeft = prefixSum;
        sumRight = totalSum - prefixSum;

        if (sumLeft >= halfSum) {
            break;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}