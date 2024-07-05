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
    float num;

    std::cout << "Enter numbers (type any non-numeric value to stop):" << std::endl;

    while (std::cin >> num) {
        numbers.push_back(num);
    }

    if (!numbers.empty()) {
        std::cout << "Mean Absolute Deviation: " << mean_absolute_deviation(numbers) << std::endl;
    } else {
        std::cout << "No valid numbers entered." << std::endl;
    }

    return 0;
}