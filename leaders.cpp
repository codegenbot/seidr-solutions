#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    std::vector<int> result;
    int max = nums.back();
    result.push_back(max);

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max) {
            max = nums[i];
            result.push_back(max);
        }
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = leaders(nums);
    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}