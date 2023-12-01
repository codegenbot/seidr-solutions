#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> numbers = {1.5, 2.5, 3.5, 4.5, 5.5};

double double_the_difference(std::vector<float> numbers) {
    double sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > 0 && numbers[i] == std::floor(numbers[i]) && static_cast<int>(numbers[i]) % 2 != 0) {
            sum += std::pow(numbers[i], 2);
        }
    }
    return sum;
}

int main() {
    double odd_sum = double_the_difference(numbers);
    std::cout << "Odd Sum: " << odd_sum << std::endl;
    assert(double_the_difference(numbers) == odd_sum);
    return 0;
}