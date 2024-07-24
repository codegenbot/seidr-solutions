#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    int num;
    std::cout << "Enter a set of numbers (separated by spaces): ";
    std::vector<int> numbers;
    while(std::cin >> num) {
        numbers.push_back(num);
    }
    if (!numbers.empty()) {
        int max_val = *std::max_element(numbers.begin(), numbers.end());
        int abs_max_val = std::abs(*std::max_element(numbers.begin(), numbers.end()));
        std::cout << "Max value is: " << max_val << std::endl;
        std::cout << "Absolute Max value is: " << abs_max_val << std::endl;
    }
    return 0;
}