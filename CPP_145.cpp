#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::vector<int> sorted_nums = order_by_points(nums);
    
    for (int num : sorted_nums) {
        std::cout << num << " ";
    }
    
    return 0;
}