#include <vector>
#include <algorithm>
#include <limits>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1)
        throw std::invalid_argument("Vector must contain at least two elements");

    auto min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = std::min(numbers[i], numbers[j]);
                closest_pair.second = std::max(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pair;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == make_pair(2.2f, 2.2f));
    return 0;
}