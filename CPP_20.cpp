```
#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() <= 1) return {};

    std::vector<std::pair<float, float>> closest_pairs;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest_pairs.clear();
                closest_pairs.emplace_back(numbers[i], numbers[j]);
            } else if (abs(numbers[i] - numbers[j]) == min_diff) {
                closest_pairs.emplace_back(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pairs;
}

int main() {
    std::vector<float> numbers;
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    std::vector<std::pair<float, float>> closest_pairs = find_closest_elements(numbers);
    if (!closest_pairs.empty()) {
        for (const auto& pair : closest_pairs) {
            std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}