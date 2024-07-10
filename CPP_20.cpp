#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 0.001;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (!issame(numbers[i], numbers[i + 1])) {
            if (closest_pairs.empty() || !issame(closest_pairs.back().first, numbers[i])) {
                closest_pairs.push_back({numbers[i], numbers[i]});
            } else {
                closest_pairs.back().second = numbers[i];
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