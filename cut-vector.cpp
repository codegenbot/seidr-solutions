#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n - 1; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += nums[j];
        }
        int currDiff = abs(sum1 - sum2);
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }

    std::vector<int> subvec1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subvec2(nums.begin() + index + 1, nums.end());
    return std::make_pair(subvec1, subvec2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << '\n';
    }
    for (int num : result.second) {
        std::cout << num << '\n';
    }

    return 0;
}