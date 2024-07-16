```cpp
#include <iostream>
#include <vector>

int calculate(std::vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<std::vector<int>> input = {{127, 97, 8192}};
    int result = calculate(input[0]);
    std::cout << "Result: " << result << std::endl;
    return 0;
}