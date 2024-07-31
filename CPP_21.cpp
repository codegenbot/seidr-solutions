#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2);

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }

    return result;
}

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
    return 0;
}