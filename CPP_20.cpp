#include <algorithm>
#include <vector>
#include <cmath>

bool issame(float a, float b) {
    return std::abs(a - b) <= 1e-5;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }
    
    double min_diff = std::numeric_limits<double>::max();
    std::pair<float, float> closest = {numbers[0], numbers[0]};
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff && issame(numbers[i], numbers[i]) && issame(numbers[j], numbers[j])) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    
    return {closest};
}