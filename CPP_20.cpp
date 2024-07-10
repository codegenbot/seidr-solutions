#include <vector>
#include <pair>
#include <iostream>
#include <limits>

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    std::vector<std::pair<float, float>> closest_pairs;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) <= std::numeric_limits<float>::epsilon()) {
                closest_pairs.push_back({numbers[i], numbers[j]});
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