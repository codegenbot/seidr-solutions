#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 0.001;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    float min_diff = 1e9;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (issame(numbers[i], numbers[i + 1])) {
            closest_pairs.push_back({numbers[i], numbers[i]});
        }
    }
    return closest_pairs;
}

int main2() {
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
        assert(closest_pairs.size() == 1 && closest_pairs[0] == std::make_pair(2.2, 2.2));
        std::cout << "No elements found." << std::endl;
    }
}