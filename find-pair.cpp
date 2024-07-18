#include <iostream>
#include <vector>
#include <map>

int main() {
    int n, x, target;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    std::map<int, int> numIdx;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIdx.find(complement) != numIdx.end()) {
            std::cout << complement << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        numIdx[nums[i]] = i;
    }
    
    return 0;
}