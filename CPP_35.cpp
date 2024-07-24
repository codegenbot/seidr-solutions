```cpp
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int nums[100]; 
    int n; 
    int max_val = INT_MIN; 
    int sum = 0; 

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string input;
        std::cout << "Enter element " << i + 1 << ": ";
        std::getline(std::cin, input);
        nums[i] = std::stoi(input); 
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] > max_val)
            max_val = nums[i];
    }

    int abs_max_val = std::abs(max_val);

    std::cout << "The absolute maximum value is: " << abs_max_val << std::endl;

    return 0;
}