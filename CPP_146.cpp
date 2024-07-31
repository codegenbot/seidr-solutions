#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && abs(num) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {1, -12, 13, -15, 16};
    int result = specialFilter(numbers);
    std::cout << "The number of special numbers is: " << result << std::endl;
    return 0;
}