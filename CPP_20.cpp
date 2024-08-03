#include <vector>
#include <utility>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;

    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }

    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if(numbers.size() < 2) return {0.0f, 0.0f};

    std::pair<float, float> closest = {numbers[0], numbers[1]};
    float min_diff = std::abs(numbers[0] - numbers[1]);

    for(size_t i = 0; i < numbers.size(); ++i) {
        for(size_t j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff < min_diff) {
                min_diff = diff;
                closest = {numbers[i], numbers[j]};
            }
        }
    }

    return closest;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::vector<float>{2.2f, 3.1f});
    return 0;
}