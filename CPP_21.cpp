#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    std::vector<float> rescaled(numbers);
    float min_val = *std::min_element(rescaled.begin(), rescaled.end());
    float max_val = *std::max_element(rescaled.begin(), rescaled.end());
    for (auto &num : rescaled) {
        num = (num - min_val) / (max_val - min_val);
    }
    return rescaled;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    std::cout << "All tests passed!\n";
    return 0;
}