#include <algorithm>
#include <vector>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < std::abs(closest_pair.first - closest_pair.second)) {
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {{closest_pair.first, closest_pair.second}};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({1.1, 2.2}, {2.2, 1.1}) && !issame({1.1, 2.3}, {2.2, 1.1});
    std::vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    assert(find_closest_elements(numbers) == {{2.2, (float)3.1}});
    return 0;
}