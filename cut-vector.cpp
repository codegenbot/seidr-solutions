#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

int main() {
    int n, cutPosition;
    std::cin >> n >> cutPosition;
    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    cutPosition = -1;
    for (int i = 1; i < n; ++i) {
        int diffTemp = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diffTemp < diff || (diffTemp == diff && abs(nums[i] - nums[i - 1]) < abs(nums[cutPosition] - nums[cutPosition - 1]))) {
            diff = diffTemp;
            cutPosition = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i == cutPosition) {
            std::cout << std::endl;
        } else if (i != cutPosition - 1) {
            std::cout << nums[i] << " ";
        } else {
            std::cout << nums[i] << std::endl;
        }
    }

    return 0;
}