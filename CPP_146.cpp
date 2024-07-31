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
    std::vector<int> numbers = {1, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int result = specialFilter(numbers);
    std::cout << "The number of special filter is: " << result << std::endl;
    return 0;
}