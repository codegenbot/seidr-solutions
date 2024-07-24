#include <vector>
#include <iostream>

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
    std::vector<int> test1 = {11, 12, 13};
    std::cout << "Test case: " << specialFilter(test1) << std::endl;

    std::vector<int> test2 = {-100, -101, 10};
    std::cout << "Test case: " << specialFilter(test2) << std::endl;
    
    return 0;
}