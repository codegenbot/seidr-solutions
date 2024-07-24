```cpp
#include <iostream>
#include <vector>

int main() {
    int result = sum_squares({1, 2, 3, 4, 5});
    std::cout << "The sum of squares is: " << result << std::endl;
}

int sum_squares(const std::vector<int>& numbers) {
    int sum = 0;
    for (const auto& number : numbers) {
        sum += number * number;
    }
    return sum;
}