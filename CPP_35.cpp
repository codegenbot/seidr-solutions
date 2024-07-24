#include <algorithm>
#include <iostream>

int findMaxAbsoluteValue() {
    int numbers[11];
    std::cout << "Enter a set of numbers (up to 10): ";
    for (int i = 0; i < 11; ++i) {
        std::cin >> numbers[i];
    }
    int max_val = *std::max_element(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]));
    return std::abs(max_val);
}

int main() {
    std::cout << "The maximum absolute value is: " << findMaxAbsoluteValue() << std::endl;
    return 0;
}