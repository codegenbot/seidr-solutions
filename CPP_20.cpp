#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    float closest = numbers[0];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i+1]) < abs(closest - numbers[i])) {
            closest = numbers[i];
        }
    }
    
    return {closest, *std::min_element(numbers.begin(), numbers.end(), [&](float a, float b){return std::abs(a-closest) > std::abs(b-closest);})};
}