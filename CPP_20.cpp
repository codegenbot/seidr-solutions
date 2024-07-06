#include <algorithm>
#include <vector>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    std::pair<float, float> closest = {numbers[0], numbers[0]};
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) < std::abs(closest.first - closest.second)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }

    return {closest};
}