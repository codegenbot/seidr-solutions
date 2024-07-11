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
        if (mp.find(target - nums[i]) != mp.end() && mp[target - nums[i]] != i && nums[i] < target - nums[i]) {
            std::cout << nums[i] << std::endl;
            std::cout << target - nums[i] << std::endl;
            break;
        }
        mp[nums[i]] = i;
    }

    return 0;
}