```cpp
#include <iostream>
#include <algorithm>
#include <cmath>

int startProgram() {
    int nums[100]; // declare array to store numbers
    int n; // variable to store number of elements in the array
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i]; // read input from user
    }
    
    int max_val = *std::max_element(nums, nums + n); // find maximum value
    int abs_max_val = std::abs(max_val); // calculate absolute maximum

    std::cout << "Maximum value is: " << max_val << std::endl;
    std::cout << "Absolute maximum value is: " << abs_max_val << std::endl;

    return 0;
}