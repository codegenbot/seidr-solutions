#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("Vector must have at least two elements.");
    }

    auto smallest_distance = numeric_limits<double>::max();
    double closest_pair = {numeric_limits<double>::min(), numeric_limits<double>::min()};

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            double distance = numbers[j] - numbers[i];
            if (abs(distance) < abs(smallest_distance)) {
                smallest_distance = distance;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return closest_pair;
}