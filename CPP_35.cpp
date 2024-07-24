```
#include <iostream>
#include <algorithm>
#include <cmath>

std::cout << "Enter the number of elements: ";
std::cin >> n;
    
for (int i = 0; i < n; ++i) {
    std::cout << "Enter element " << i + 1 << ": ";
    std::cin >> nums[i]; 
}

int max_val = *std::max_element(nums, nums + n); 
int abs_max_val = std::abs(max_val); 

std::cout << "Maximum value is: " << max_val << std::endl;
std::cout << "Absolute maximum value is: " << abs_max_val << std::endl;

return 0;