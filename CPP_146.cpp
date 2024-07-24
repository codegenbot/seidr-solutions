```cpp
#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && ((num / 10) % 2 == 1 || (num % 10) % 2 == 1)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {12, -23, 34, 45, -56, 67};
    int result = specialFilter(numbers);
    std::cout << "The number of special numbers is: " << result << std::endl;
    return 0;
}