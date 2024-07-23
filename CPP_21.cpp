#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> rescale_to_unit(const std::vector<float>& v) {
    float min_val = *std::min_element(v.begin(), v.end());
    float max_val = *std::max_element(v.begin(), v.end());
    std::vector<float> rescaled;
    for (float val : v) {
        rescaled.push_back((val - min_val) / (max_val - min_val));
    }
    return rescaled;
}

int main() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
    return 0;
}