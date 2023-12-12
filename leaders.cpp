#include <vector>
#include <iostream>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;

    int n = nums.size();
    int maxSoFar = nums[n - 1];
    leaders.push_back(maxSoFar);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxSoFar) {
            maxSoFar = nums[i];
            leaders.push_back(maxSoFar);
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