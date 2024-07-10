#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    
    std::map<int, std::vector<int>> mp;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            for (int j : mp[complement]) {
                std::cout << complement << " " << nums[i] << std::endl;
            }
        }
        mp[nums[i]].push_back(nums[i]);
    }
    
    return 0;
}