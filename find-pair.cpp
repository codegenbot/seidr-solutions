#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_set<int> complementSet;
    std::vector<int> result;

    for (int num : nums) {
        int complement = target - num;
        if (complementSet.count(complement)) {
            result.push_back(complement);
            result.push_back(num);
            break;
        }
        complementSet.insert(num);
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

    std::vector<int> pair = findPair(nums, target);
    for (int num : pair) {
        std::cout << num << std::endl;
    }

    return 0;
}