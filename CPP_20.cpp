#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> result;
    std::pair<float, float> closest = make_pair(numbers[0], numbers[0]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < abs(closest.first - closest.second)) {
                closest = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    result.push_back(closest);
    return result;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::vector<std::pair<float, float>>({{2.2, 3.1}));
    return 0;
}