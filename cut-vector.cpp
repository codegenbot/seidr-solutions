#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    bool found = false;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cerr << "Cannot find a cut point." << std::endl;
        return 1;
    }

    std::vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvec2(nums.begin() + idx + 1, nums.end());

    for (int i = 0; i <= idx; ++i) {
        std::cout << subvec1[i] << std::endl;
    }
    for (int i = 0; i < subvec2.size(); ++i) {
        std::cout << subvec2[i] << std::endl;
    }

    return 0;
}