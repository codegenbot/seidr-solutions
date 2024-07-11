#include <iostream>
#include <vector>
#include <map>

int main() {
    int n, target;
    std::cin >> n;
    std::vector<int> nums(n);
    std::map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        mp[nums[i]] = i;
    }

    std::cin >> target;

    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end() && mp[target - nums[i]] != i) {
            std::cout << std::min(nums[i], target - nums[i]) << std::endl;
            std::cout << std::max(nums[i], target - nums[i]) << std::endl;
            break;
        }
    }

    return 0;
}