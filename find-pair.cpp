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
    
    std::map<int, int> numToIndex;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            std::cout << nums[numToIndex[complement]] << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        numToIndex[nums[i]] = i;
    }
    
    return 0;
}