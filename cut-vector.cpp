#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int target = sum / 2;
    int prefix_sum = 0;
    int idx = -1;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= target) {
            idx = i;
            break;
        }
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvector2(nums.begin() + idx + 1, nums.end());

    for (int num : subvector1) {
        std::cout << num << std::endl;
    }

    for (int num : subvector2) {
        std::cout << num << std::endl;
    }

    return 0;
}