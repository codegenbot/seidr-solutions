```cpp
#include <initializer_list>
#include <vector>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    auto closest_pair = std::make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < std::abs(closest_pair.first - closest_pair.second)) {
                closest_pair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pair;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-5f) { // 1e-5f is a small float value
            return false;
        }
    }

    return true;
}

int main() {
    assert(std::equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}