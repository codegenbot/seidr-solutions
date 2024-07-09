#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / abs(num)) % 10 % 2 != 0 || (abs(num) % 10) % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> test1 = {-11, -12, -13};
    int result1 = specialFilter(test1);
    if(result1 == 3) {
        std::cout << "Test 1 passed" << std::endl;
    } else {
        std::cout << "Test 1 failed. Expected: 3, got: " << result1 << std::endl;
    }

    std::vector<int> test2 = {11, -12, 13};
    int result2 = specialFilter(test2);
    if(result2 == 3) {
        std::cout << "Test 2 passed" << std::endl;
    } else {
        std::cout << "Test 2 failed. Expected: 3, got: " << result2 << std::endl;
    }

    return 0;
}