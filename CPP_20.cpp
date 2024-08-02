#include <vector>
#include <iostream>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-6;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers);

int main() {
    std::vector<float> numbers = {3.2, 1.5, 4.8, 2.1, 5.6};
    std::pair<float, float> closest_elements = find_closest_elements(numbers);
    std::cout << "Closest elements: " << closest_elements.first << " and " << closest_elements.second << std::endl;
    return 0;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    float num1 = sorted_numbers[0], num2 = sorted_numbers[1];
    
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            num1 = sorted_numbers[i];
            num2 = sorted_numbers[i + 1];
        }
    }
    
    return {num1, num2};
}