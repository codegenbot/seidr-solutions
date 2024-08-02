#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return (a - b) <= 1e-9;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        return {};
    }
    
    std::pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (issame(numbers[j], numbers[i])) {
                continue;
            }
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    return {closest_pair};
}