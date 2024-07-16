#include <iostream>
#include <climits>
#include <vector>

void findCutSpot(const std::vector<int>& nums) {
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < nums.size(); i++) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            cutIndex = i;
            minDiff = diff;
        }
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> subvector2(nums.begin() + cutIndex, nums.end());

    for (int num : subvector1) {
        std::cout << num << std::endl;
    }

    for (int num : subvector2) {
        std::cout << num << std::endl;
    }

    if (minDiff == INT_MAX) {
        std::cout << "No valid cut found." << std::endl;
    }
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    findCutSpot(nums);

    return 0;
}