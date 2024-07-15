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
    
    std::map<int, int> seen;
    for (int i = 0; i < n; ++i) {
        if (seen.find(target - nums[i]) != seen.end()) {
            std::cout << nums[i] << std::endl;
            std::cout << target - nums[i] << std::endl;
            break;
        }
        seen[nums[i]] = i;
    }
    
    return 0;
}