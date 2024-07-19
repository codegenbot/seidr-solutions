#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& input) {
    float max_val = *std::max_element(input.begin(), input.end());
    float min_val = *std::min_element(input.begin(), input.end());
    std::vector<float> output;
    for (float val : input) {
        output.push_back((val - min_val) / (max_val - min_val));
    }
    return output;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
}