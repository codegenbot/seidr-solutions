```cpp
#include <vector>
#include <limits>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {-0.0f, -0.0f};
    }
    
    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    
    return closest_pair;
}