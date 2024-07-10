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
    
    std::map<int, int> hash;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (hash.find(complement) != hash.end()) {
            std::cout << complement << std::endl << nums[i];
            break;
        }
        hash[nums[i]] = i;
    }
    
    return 0;
}