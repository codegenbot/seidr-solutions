#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int target;
    std::cin >> target;
    
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::cout << complement << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}