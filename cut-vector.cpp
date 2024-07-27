#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int minDiff = std::numeric_limits<int>::max();
    int cutSpot = -1;

    for (int i = 1; i < n; ++i) {
        int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = std::abs(sum1 - sum2);

        if (diff < minDiff) {
            minDiff = diff;
            cutSpot = i;
        }
    }

    std::vector<int> subVec1(nums.begin(), nums.begin() + cutSpot);
    std::vector<int> subVec2(nums.begin() + cutSpot, nums.end());

    for (int num : subVec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (int num : subVec2) {
        std::cout << num << " ";
    }

    return 0;
}