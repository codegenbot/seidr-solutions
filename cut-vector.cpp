#include <iostream>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int totalSum = 0;
    for (int n : nums) {
        totalSum += n;
    }

    int leftSum = 0;
    int minDiff = totalSum;
    int cutIndex = 0;
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> firstSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> secondSubvector(nums.begin() + cutIndex + 1, nums.end());

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