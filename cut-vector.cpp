#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> nums;
    int n, cutIndex = 0;
    std::vector<int> firstSubvector, secondSubvector;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    if (n > 1) {
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        int sum1 = 0, minDiff = totalSum, newDiff;

        for (int i = 0; i < n; ++i) {
            sum1 += nums[i];
            newDiff = std::abs(totalSum - 2 * sum1);
            if (newDiff < minDiff) {
                minDiff = newDiff;
                cutIndex = i;
            }
        }

        firstSubvector = std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1);
        secondSubvector = std::vector<int>(nums.begin() + cutIndex + 1, nums.end());
    } else {
        firstSubvector.push_back(nums[0]);
        secondSubvector.push_back(nums[0]);
    }

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