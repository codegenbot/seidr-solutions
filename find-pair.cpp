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
    
    std::map<int, int> numIndex;
    bool pairFound = false;
    
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            if (!pairFound) {
                pairFound = true;
            }
            std::cout << nums[i] << " " << complement << std::endl;
        }
        numIndex[nums[i]] = i;
    }
    
    if (!pairFound) {
        std::cout << "No pair found." << std::endl;
    }
    
    return 0;
}