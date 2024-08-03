#include <vector>
#include <utility>
#include <cmath>

std::pair<size_t, size_t> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) return {0, 0};

    float diff = std::abs(numbers[1] - numbers[0]);
    std::pair<size_t, size_t> closest_pair = {0, 1};

    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float current_diff = std::abs(numbers[i + 1] - numbers[i]);
        if (current_diff < diff) {
            diff = current_diff;
            closest_pair = {i, i + 1};
        }
    }

    return closest_pair;
}

int main() {
    auto closest_pair = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    // Add your own way of verifying the output here
    return 0;
}