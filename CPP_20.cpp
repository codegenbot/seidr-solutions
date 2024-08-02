#include <vector>
#include <algorithm>
#include <limits>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::float_round_tolerance;
    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2];
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }
    
    std::vector<float> result(2);
    for (int i = 0; i < 2; ++i) {
        result[i] = closest_pair[i];
    }
    
    return result;
}