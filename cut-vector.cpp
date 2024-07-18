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
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    int sumLeft = 0, sumRight = 0;
    for (int i = 0; i < n; ++i) {
        sumRight += nums[i];
    }

    int halfSum = 0;
    for (int i = 0; i < n; ++i) {
        sumLeft += nums[i];
        halfSum += nums[i];

        if (sumLeft >= halfSum) {
            break;
        }
    }

    cutIndex = sumLeft < sumRight ? (n - 1) : n;

    for (int i = 0; i < cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}