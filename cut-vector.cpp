#include <vector>
#include <iostream>
#include <climits>

int main() {
    std::vector<int> nums;
    int n, cutIndex;
    std::vector<int> firstSubvector, secondSubvector;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int minDiff = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < n; ++j) {
            rightSum += nums[j];
        }
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    firstSubvector = std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1);
    secondSubvector = std::vector<int>(nums.begin() + cutIndex + 1, nums.end());

    for (int num : firstSubvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : secondSubvector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}