```cpp
#include <iostream>
#include <vector>

double sum_squares(const std::vector<double>& input) {
    double sum = 0;
    for (const auto& x : input) {
        sum += x * x;
    }
    return sum;
}

int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two numbers." << std::endl;
        return 1;
    }
    std::vector<double> input(2); // Initialize with size
    input[0] = num1;
    input[1] = num2;
    std::cout << "Sum of squares is: " << sum_squares(input) << std::endl;
    return 0;
}