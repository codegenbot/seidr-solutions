```cpp
#include <iostream>
#include <vector>
#include <cmath>

size_t double_the_difference(std::vector<unsigned long> input) {
    size_t sum = 0;
    for (unsigned long num : input) {
        if (num > 0 && num == static_cast<unsigned long>(std::floor((double)num))) { 
            if ((double)num % 2.0 != 0.0) { 
                sum += std::pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    unsigned long n;
    std::vector<unsigned long> input;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (unsigned long i = 0; i < n; i++) {
        unsigned long num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(num > 0) {
            input.push_back(static_cast<unsigned long>(num));
        }
    }
    size_t result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << result << std::endl;
}