```cpp
#include <iostream>
#include <vector>
#include <cmath>

size_t double_the_difference(std::vector<size_t> input) {
    size_t sum = 0;
    for (size_t num : input) {
        if (num > 0 && num == static_cast<size_t>(std::floor((double)num))) { 
            if ((double)num % 2.0 != 0.0) { 
                sum += std::pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    size_t n;
    std::vector<size_t> input;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (size_t i = 0; i < n; i++) {
        size_t num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(num > 0) {
            input.push_back(num);
        }
    }
    size_t result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << result << std::endl;
}