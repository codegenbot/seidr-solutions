#include <iostream>
#include <vector>
#include <climits> // Add this line for INT_MAX
#include <numeric> // Add this line for std::accumulate

int main() {
    int n, cutIndex;
    std::cin >> n >> cutIndex;
    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    int cutPosition = -1;
    for (int i = 1; i < n; ++i) {
        int diffTemp = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diffTemp < diff) {
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