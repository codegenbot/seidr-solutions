```cpp
#include <iostream>
#include <cassert>
#include <vector>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num; 
    if (num >= 0) {
        std::cout << "Result of searching " << num << ": " << search(num) << std::endl;
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    if (num >= 0) {
        std::cout << "Result of searching " << num << ": " << search(num) << std::endl;
    } else {
        std::cout << "The search function returns -1 for negative numbers." << std::endl;
    }
    
    int max_value = *std::max_element(nums.begin(), nums.end());
    assert(search(max_value) == -1);
    
    return 0;
}