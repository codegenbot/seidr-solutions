```cpp
#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; 
    int n; 
    int max_val = INT_MIN; 
    int sum = 0;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        char str[100]; 
        std::cin >> str;
        nums[i] = atoi(str); 
    }

    max_val = *std::max_element(nums, nums+n);

    std::cout << "The absolute maximum value is: " << std::abs(max_val) << std::endl;

    return 0;
}