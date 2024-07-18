#include <climits>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;

    return 0;
}