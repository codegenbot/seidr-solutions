#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

int main() {
    int n, target;
    std::cin >> n >> target;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::unordered_map<int, int> map;
    bool pairFound = false;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > target || target - nums[i] < std::numeric_limits<int>::min() || target - nums[i] > std::numeric_limits<int>::max()) {
            continue;
        }
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            std::cout << nums[i] << " " << complement << std::endl;
            pairFound = true;
            break;
        }
        map[nums[i]] = i;
    }

    if (!pairFound) {
        std::cout << "Pair not found" << std::endl;
    }

    return 0;
}