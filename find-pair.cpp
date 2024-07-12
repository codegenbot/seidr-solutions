#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    long long target;
    std::cin >> n >> target;
    
    std::vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::unordered_map<long long, long long> map;
    bool pairFound = false;
    for (int i = 0; i < n; ++i) {
        long long complement = target - nums[i];
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