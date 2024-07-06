```cpp
#include <iostream>
#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && abs(num) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() { 
    std::vector<int> nums;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    nums.resize(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> nums[i];
    }
    
    int count = specialFilter(nums);
    
    std::cout << "Count: " << count << std::endl;
    assert(count == 0);
    return 0; 
}