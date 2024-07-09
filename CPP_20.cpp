```cpp
#include <algorithm>
#include <limits>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    return {closest};
}