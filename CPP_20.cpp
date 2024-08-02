#include <algorithm>
#include <vector>

namespace {
bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    std::sort(numbers.begin(), numbers.end());

    auto it = min_element(numbers.begin() + 1, numbers.end(),
                            [&numbers](float a, float b) {
                                return abs(a - numbers[0]) > abs(b - numbers[0]);
                            });

    return {numbers[0], *it};
}