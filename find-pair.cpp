#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    
    std::map<int, int> num_idx;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (num_idx.find(complement) != num_idx.end()) {
            std::cout << complement << std::endl << nums[i] << std::endl;
            break;
        }
        num_idx[nums[i]] = i;
    }
    
    return 0;
}