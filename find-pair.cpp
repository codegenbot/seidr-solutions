#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n, target;
    std::cin >> n >> target;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::unordered_map<int, int> map;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            std::cout << nums[i] << " " << complement << std::endl;
            break;
        }
        map[nums[i]] = i;
    }

    return 0;
}