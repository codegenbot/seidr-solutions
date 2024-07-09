#include <vector>
#include <algorithm>

std::pair<float, float> findClosestElements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if ((numbers[i] <= numbers[j]) && (std::abs(numbers[i] - numbers[j]) < min_diff)) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pair = std::make_pair(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }

    return closest_pair;
}

int main() {
    assert(std::vector<float>({1.1, 2.2, 3.1, 4.1, 5.1}) == findClosestElements({1.1, 2.2, 3.1, 4.1, 5.1}));
}