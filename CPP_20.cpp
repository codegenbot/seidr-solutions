#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = std::make_pair(std::min((float)numbers[i], (float)numbers[j]), std::max((float)numbers[i], (float)numbers[j]));
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(issame({2.2f}, {3.1f}));
    return 0;
}