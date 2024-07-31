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
    std::vector<int> numbers = {12, 13, 14, 15, 16, 17, 18, 19, 20};
    int result = specialFilter(numbers);
    std::cout << "The number of integers that satisfy the condition is: " << result << std::endl;
    return 0;
}