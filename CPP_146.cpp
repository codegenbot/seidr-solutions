#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> test1 = {11, 12, 13, 14};
    int result1 = specialFilter(test1);
    std::cout << "Test Case 1: " << result1 << std::endl;
    
    std::vector<int> test2 = {20, 21, 22, 23};
    int result2 = specialFilter(test2);
    std::cout << "Test Case 2: " << result2 << std::endl;
    
    return 0;
}