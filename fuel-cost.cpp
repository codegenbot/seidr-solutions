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
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}