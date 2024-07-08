#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
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

std::vector<float> rescale_to_unit(std::vector<float> input) {
    std::vector<float> unit_values;
    float max_val = *std::max_element(input.begin(), input.end());
    for (size_t i = 0; i < input.size(); ++i) {
        unit_values.push_back(input[i] / max_val);
    }
    return unit_values;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
}