#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    std::sort(numbers.begin(), numbers.end());

    auto it = std::min_element(numbers.begin() + 1, numbers.end(),
                                [&numbers](float a, float b) {
                                    return abs(a - numbers[0]) > abs(b - numbers[0]);
                                });

    return {numbers[0], *it};
}