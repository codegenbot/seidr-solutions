#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int target = sum / 2;
    int currSum = 0;
    int index = 0;

    while (currSum < target) {
        currSum += nums[index];
        index++;
    }

    if (currSum > target) {
        index--;
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + index);
    std::vector<int> subvector2(nums.begin() + index, nums.end());

    // Check if cutting at index + 1 gives smaller difference
    if (index + 1 < nums.size()) {
        std::vector<int> subvector2_plus1(nums.begin() + index + 1, nums.end());

        if (std::abs(target - currSum) > std::abs(target - (currSum + nums[index + 1]))) {
            subvector2 = subvector2_plus1;
        }
    }

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    std::cout << result.first.size() << std::endl;
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << result.second.size() << std::endl;
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}