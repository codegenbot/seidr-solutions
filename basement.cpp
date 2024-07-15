#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum < 0) {
            std::cout << i << std::endl;
            return 0;
        }
    }
    
    std::cout << 0 << std::endl;
    
    return 0;
}