```cpp
#include <iostream>
#include <vector>

unsigned long double_the_difference(const std::vector<unsigned long>& input) {
    unsigned long sum = 0;
    for (const auto& num : input) {
        sum += num * num;
    }
    return sum;
}

int main() {
    int n;
    std::vector<unsigned long> input;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n && i <= 65535; i++) {
        unsigned long num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(num > 0) {
            input.push_back(static_cast<unsigned long>(num));
        }
    }
    size_t result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << static_cast<int>(result) << std::endl;
}