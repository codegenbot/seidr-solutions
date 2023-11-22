#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int max_right = nums.back();
    leaders.push_back(max_right);

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(max_right);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> leaders = findLeaders(nums);

    std::cout << leaders.size() << std::endl;
    for (int i = 0; i < leaders.size(); i++) {
        std::cout << leaders[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}