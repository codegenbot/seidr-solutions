#include <iostream>
#include <vector>

int main() {
    int n, target;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::cin >> target;
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                std::cout << nums[i] << " " << nums[j] << std::endl;
                return 0;
            }
        }
    }
    
    return 0;
}