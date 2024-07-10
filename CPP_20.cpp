#include <algorithm>
#include <vector>
#include <numeric>
#include <utility>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.1) return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < std::abs(closest_pair.first - closest_pair.second)) {
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair};
}

int main() {
    const auto result = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    assert(result.size() == 1);
    std::cout << "(" << result[0].first << ", " << result[0].second << ")" << std::endl;
    return 0;
}