#define main main2

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

std::vector<float> read_input_numbers() {
    std::vector<float> numbers;
    float input;
    while (std::cin >> input) {
        numbers.push_back(input);
    }
    return numbers;
}

int main2() {
    std::vector<float> numbers = read_input_numbers();

    if (numbers.empty()) {
        std::cout << "No numbers provided. Exiting." << std::endl;
        return 1;
    }

    float mad = mean_absolute_deviation(numbers);
    std::cout << "Mean Absolute Deviation: " << mad << std::endl;

    return 0;
}