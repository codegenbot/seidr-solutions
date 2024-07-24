#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        return {0.0f, 0.0f}; // or throw an exception, depending on the desired behavior
    }

    std::sort(numbers.begin(), numbers.end());

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i-1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i-1], numbers[i]};
        }
    }

    return closest_pair;
}