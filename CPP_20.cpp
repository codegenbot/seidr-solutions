#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    if (arr.size() < 2) {
        return {};
    }

    std::vector<float> closest_elements;

    float min_diff = std::abs(arr[0] - arr[1]);

    for (size_t i = 1; i < arr.size() - 1; ++i) {
        float diff = std::abs(arr[i] - arr[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {arr[i], arr[i + 1]};
        }
    }

    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}