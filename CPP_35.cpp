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
        std::cin >> nums[i];
    }

    int max = *std::max_element(nums, nums+n);

    std::cout << "The absolute maximum value is: " << std::abs(max) << std::endl;

    return 0;
}