#include <iostream>
#include <vector>
#include <map>
#include <utility>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) return 1;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> nums[i])) return 1;
    }

    int target;
    if (!(std::cin >> target)) return 1;

    std::map<int, int> mp;
    std::pair<int, int> indices;

    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            indices = std::make_pair(mp[complement], i);
            break;
        }
        mp[nums[i]] = i;
    }

    if (indices.first != indices.second) {
        std::cout << nums[indices.first] << std::endl;
        std::cout << nums[indices.second] << std::endl;
    }

    return 0;
}