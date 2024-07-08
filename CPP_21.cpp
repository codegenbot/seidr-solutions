#include <vector>
#include <cassert>
#include <algorithm>

bool is_same(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

void rescale_to_unit(std::vector<float>& values) {
    float min_val = *std::min_element(values.begin(), values.end());
    float max_val = *std::max_element(values.begin(), values.end());
    
    for (size_t i = 0; i < values.size(); ++i) {
        values[i] = (values[i] - min_val) / (max_val - min_val);
    }
}

int main() {
    std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    rescale_to_unit(input);
    
    assert(is_same(input, {0.25, 0.0, 1.0, 0.5, 0.75}));
}