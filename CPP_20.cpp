```cpp
#include <algorithm>
#include <vector>
#include <utility>

bool std::issame(std::vector<std::pair<float, float>> a, std::vector<std::pair<float, float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i].first - a[i].second) != std::abs(b[i].first - b[i].second)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> numbers;
    for (float num; std::cin >> num; ) {
        numbers.push_back(num);
    }
    std::sort(numbers.begin(), numbers.end());
    auto closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < std::abs(closest_pair.first - closest_pair.second)) {
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {0, {{closest_pair.first, closest_pair.second}}};
}