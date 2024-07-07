```cpp
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
    std::cin >> num1 >> num2;
    std::vector<double> input({num1, num2});
    std::cout << "Sum of squares is: " << sum_squares(input) << std::endl;
    return 0;
}