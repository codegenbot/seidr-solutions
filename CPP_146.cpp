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
    std::vector<int> numbers = {-12, -11, -1, 0, 1, 11, 12};
    int result = specialFilter(numbers);
    std::cout << "The number of integers in the vector that meet the condition is: " << result << std::endl;
    return 0;
}