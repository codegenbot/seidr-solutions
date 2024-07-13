#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);

        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; i++) std::cout << nums[i] << " ";
    std::cout << std::endl;
    for (int i = cutIndex; i < n; i++) std::cout << nums[i] << " ";
    std::cout << std::endl;
}

int main() {
    vector<int> nums = {6310, 2545, 5656, 5646};
    cutVector(nums);
    return 0;
}