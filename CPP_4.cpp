#include <algorithm>
#include <iostream>
#include <vector>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    float mad = deviation_sum / numbers.size();

    return mad;
}

int main() {
    std::vector<float> numbers;
    float num;
    std::cout << "Enter numbers (enter a non-numeric character to stop): ";
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    float result = mean_absolute_deviation(numbers);

    std::cout << "Mean Absolute Deviation: " << result << std::endl;

    return 0;
}