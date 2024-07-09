#include <vector>
#include <algorithm>

bool isSame(float a, float b) {
    return std::abs(a - b) <= 1e-9;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (isSame(numbers[i], numbers[j])) {
                closest_pair = std::make_pair(numbers[i], numbers[j]);
                break;
            }
        }
    }

    return closest_pair;
}