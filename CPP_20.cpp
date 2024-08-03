#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::pair<float, float> closest;
    float min_diff = std::abs(numbers[0] - numbers[1]);
    
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    return closest;
}

int main() {
    // Handle input and output for testing the function
    return 0;
}