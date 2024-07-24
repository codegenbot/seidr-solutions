```cpp
#include <iostream>
#include <algorithm>

int main() {
    int nums[100]; 
    int n; 
    int max_val = INT_MIN; 
    std::string str;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }

    str = "The elements are: ";
    for (int i = 0; i < n; i++) {
        str += std::to_string(nums[i]);
        if(i < n-1) {
            str += ' ';
        }
    }

    std::cout << str << std::endl;

    return 0;
}