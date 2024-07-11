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
    
    std::map<long long, std::vector<int>> numIndex;
    for (int i = 0; i < n; ++i) {
        long long complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            for (int index : numIndex[complement]) {
                std::cout << complement << " " << nums[i] << std::endl;
            }
        }
        numIndex[nums[i]].push_back(i);
    }
    
    return 0;
}