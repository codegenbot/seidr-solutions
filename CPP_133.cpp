#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<double>& input) {
    int output = 0;
    for (const auto& num : input) {
        output += static_cast<int>(num * num);
    }
    return output;

}

int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two numbers." << std::endl;
        return 1;
    }
    std::vector<double> input({static_cast<double>(num1), static_cast<double>(num2)});
    std::cout << "Sum of squares is: " << sum_squares(input) << std::endl;
    return 0;