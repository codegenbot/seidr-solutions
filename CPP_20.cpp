#include <vector>
#include <utility>
#include <cmath>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }

    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) return {0.0f, 0.0f};

    float diff = std::abs(numbers[1] - numbers[0]);
    std::pair<float, float> closest_pair = {numbers[0], numbers[1]};

    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float current_diff = std::abs(numbers[i + 1] - numbers[i]);
        if (current_diff < diff) {
            diff = current_diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return closest_pair;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::vector<float>{2.2f, 3.1f}));
    return 0;
}