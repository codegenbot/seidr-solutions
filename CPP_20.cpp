#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("The input vector must have at least two elements.");
    }
    
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    
    return closest_pair;
}