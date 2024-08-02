#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

pair<float, float> find_closest_elements(std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        } else if (issame(numbers[i + 1] - numbers[i], min_diff)) {
            if (numbers[i] < num1) {
                num1 = numbers[i];
                num2 = numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}

int main() {
    std::vector<float> numbers = {12.5, 3.7, 5.2, 8.9, 6.4, 21.1};
    std::pair<float, float> closest_numbers = find_closest_elements(numbers);
    std::cout << "Closest elements are: " << closest_numbers.first << " and " << closest_numbers.second;
    return 0;
}