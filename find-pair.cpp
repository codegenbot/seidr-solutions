#include <iostream>
#include <vector>
#include <map>

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
    std::pair<int, int> result_pair;

    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            result_pair = std::make_pair(mp[complement], i);
            break;
        }
        mp[nums[i]] = i;
    }
    
    std::cout << nums[result_pair.first] << std::endl;
    std::cout << nums[result_pair.second] << std::endl;

    return 0;
}