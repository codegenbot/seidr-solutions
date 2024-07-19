```
#include <algorithm>
#include <vector>
#include <numeric>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest.first = (numbers[i] <= numbers[j]) ? numbers[i] : numbers[j];
                closest.second = (numbers[i] > numbers[j]) ? numbers[i] : numbers[j];
            }
        }
    }

    return {{closest.first, closest.second}};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<std::pair<float, float>>{{2.2, 3.1}}));
}