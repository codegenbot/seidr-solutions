```
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
    int testResult = specialFilter({1, 11, 21});
    std::cout << "The result is: " << testResult << std::endl;
    return 0;
}