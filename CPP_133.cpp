#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded = std::ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    std::vector<float> numbers;
    float input;
    std::cout << "Enter numbers (enter any non-numeric value to stop): ";
    while (std::cin >> input) {
        numbers.push_back(input);
    }

    std::cout << "Sum of the squares of rounded numbers: " << sum_squares(numbers) << std::endl;

    return 0;
}