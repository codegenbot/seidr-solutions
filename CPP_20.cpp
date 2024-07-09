```cpp
#include <initializer_list>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (issame({numbers[i], numbers[j]}, closest_pair.second) && std::abs(numbers[i] - numbers[j]) < std::abs(closest_pair.first - closest_pair.second)) {
                closest_pair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pair;
}