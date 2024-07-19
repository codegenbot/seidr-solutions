#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    // Input numbers vector from user
    std::vector<float> numbers;
    float number;
    std::cout << "Enter numbers (enter a non-numeric value to stop): ";
    while (std::cin >> number) {
        numbers.push_back(number);
    }

    auto closest_elements = find_closest_elements(numbers);
    std::cout << "Closest elements are: " << closest_elements.first << " and " << closest_elements.second << std::endl;

    return 0;
}