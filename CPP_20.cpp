#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.0001f) {
            return false;
        }
    }

    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& arr) {
    std::vector<float> result;
    for (size_t i = 1; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            result.push_back(arr[i - 1]);
            result.push_back(arr[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {2.2f, 4.1f}));
    return 0;
}