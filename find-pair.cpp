#include <iostream>
#include <vector>
#include <map>

int main() {
    int n, a, b, target;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    std::map<int, int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.count(target - nums[i])) {
            std::cout << target - nums[i] << std::endl << nums[i];
            break;
        }
        seen[nums[i]] = i;
    }
    
    return 0;
}