#include <iostream>
#include <vector>
#include <map>

int main() {
    int n, target;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cin >> target;

    std::map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            std::cout << complement << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        mp[nums[i]] = i;
    }

    return 0;
}