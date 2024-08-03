\#include <vector>
\#include <utility>
\#include <cmath>
\#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::pair<float, float> closest_pair;
    float min_diff = std::abs(numbers[0] - numbers[1]);

    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float current_diff = std::abs(numbers[i] - numbers[i + 1]);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return closest_pair;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}