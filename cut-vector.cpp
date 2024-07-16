#include <iostream>
#include <climits>
#include <vector>

std::vector<int> nums = {1, 2, 3, 4, 5}; // Example vector
int cutIndex = 2; // Example cutIndex
int minDiff = INT_MAX;
int bestCut = 0;

for (int i = 1; i < nums.size(); i++) {
    int diff = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
    if (diff < minDiff) {
        minDiff = diff;
        bestCut = i;
    }
}

if (bestCut > 0 && bestCut < nums.size()) {
    std::vector<int> left(nums.begin(), nums.begin() + bestCut);
    std::vector<int> right(nums.begin() + bestCut, nums.end());

    for (int num : left) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : right) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
} else {
    std::cout << "No valid cut found." << std::endl;
}

return 0;