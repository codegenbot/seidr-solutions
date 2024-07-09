#include <vector>
#include <numeric>
#include <cmath>
#include <limits>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    float min_diff = std::numeric_limits<float>::max();
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < threshold && diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    return min_diff < threshold;
}

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(a, 0.5) == false);
    return 0;
}