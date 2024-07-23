#include <iostream>
#include <vector>

int main() {
    int n, target;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    std::map<int, int> numIndex;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::cout << nums[i] << std::endl;
            std::cout << complement << std::endl;
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}