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
    map.reserve(n);  // add this line after map declaration
    
    bool pairFound = false;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end() && map[complement] != i) {
            std::cout << complement << " " << nums[i] << std::endl;
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