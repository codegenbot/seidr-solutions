#include <initializer_list>
#include <vector>
#include <algorithm>

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
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::equal(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}).first, find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}).second, {2.2f, 3.1f}));
    return 0;
}