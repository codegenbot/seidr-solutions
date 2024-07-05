#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float> &numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += std::fabs(num - mean);
    }

    return mad_sum / numbers.size();
}

int main() {
    std::vector<float> numbers;
    float input;
    std::cout << "Enter numbers (type any non-number to stop): " << std::endl;
    while (std::cin >> input) {
        numbers.push_back(input);
    }
    std::cout << "Mean Absolute Deviation: " << mean_absolute_deviation(numbers) << std::endl;
    return 0;
}