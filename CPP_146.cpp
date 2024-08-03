#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> numbers = {11, 21, 12, 13, -14, 25, 16};
    int result = specialFilter(numbers);
    std::cout << "The number of special filter is: " << result;
    return 0;
}