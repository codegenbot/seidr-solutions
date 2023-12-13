#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::vector<int> result;
    std::sort(nums.begin(), nums.end()); // Sort the vector in ascending order

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            result.push_back(nums[left]);
            result.push_back(nums[right]);
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    std::vector<int> result = findPair(nums, target);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}