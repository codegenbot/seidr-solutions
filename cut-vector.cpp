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

    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < n; ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0)
                          - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i == splitIndex) {
            std::cout << std::endl;
        } else if (i != splitIndex - 1) {
            std::cout << nums[i] << " ";
        } else {
            std::cout << nums[i] << std::endl;
        }
    }

    return 0;
}