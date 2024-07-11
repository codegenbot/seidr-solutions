#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    int target;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    std::map<int, int> numIndex;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::cout << nums[i] << " " << complement << std::endl;
            return 0;
        }
        numIndex[nums[i]] = i;
    }
    std::cout << "No pair found." << std::endl;
    return 0;
}