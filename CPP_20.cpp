#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() <= 1) {
        throw runtime_error("Vector must have at least two elements.");
    }

    float min_diff = numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}