#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    long long target;
    std::cin >> n;
    std::vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    std::map<long long, int> numIndex;
    for (int i = 0; i < n; ++i) {
        long long complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::cout << complement << " " << nums[i] << std::endl;
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}