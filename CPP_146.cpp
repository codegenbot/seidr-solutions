```cpp
#include <cassert>
#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums) {
    int c = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            c++;
        }
    }
    return c; 
}

int main() {
    std::vector<int> nums;
    for (int i : {1, 11, 21}) {
        nums.push_back(i);
    }
    int testResult = specialFilter(nums);
    std::cout << "The result is: " << testResult << std::endl;
    return 0;
}