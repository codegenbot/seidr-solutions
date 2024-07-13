#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5}; // Example vector initialization

    int n = nums.size();
    int cutIndex = n / 2;
    
    for (int i = 0; i <= cutIndex; i++) 
        std::cout << nums[i] << " ";
        
    std::cout << std::endl;
    
    for (int i = cutIndex + 1; i < n; i++) 
        std::cout << nums[i] << " ";
        
    std::cout << std::endl;
    
    return 0;
}