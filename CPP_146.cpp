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
    std::vector<int> test1 = {-11, -12, 13, 14};
    int result1 = specialFilter(test1);
    if (result1 == 2) {
        std::cout << "Test case 1 passed." << std::endl;
    } else {
        std::cout << "Test case 1 failed. Expected: 2, Actual: " << result1 << "." << std::endl;
    }

    std::vector<int> test2 = {15, -16};
    int result2 = specialFilter(test2);
    if (result2 == 0) {
        std::cout << "Test case 2 passed." << std::endl;
    } else {
        std::cout << "Test case 2 failed. Expected: 0, Actual: " << result2 << "." << std::endl;
    }

    return 0;
}