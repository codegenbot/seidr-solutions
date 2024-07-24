```cpp
#include <iostream>
#include <algorithm>

int main() {
    int numbers[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_val = *std::max_element(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]));
    int abs_max_val = std::abs(max_val);
    
    std::cout << "Max value is: " << max_val << std::endl;
    std::cout << "Absolute Max value is: " << abs_max_val << std::endl;

    return 0;
}