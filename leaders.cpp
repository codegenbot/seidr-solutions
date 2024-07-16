#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = findLeaders(nums);
    
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}